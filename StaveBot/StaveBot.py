import telebot
import os
from telebot import types

bot = telebot.TeleBot("Your Token")

chat_id = ""

lng = "zero"

@bot.message_handler(commands = ["start"])
def language_selection(message):
    keyboard = types.InlineKeyboardMarkup() # Keyboard with message
    key_eng = types.InlineKeyboardButton(text = "English", callback_data = "eng")
    keyboard.add(key_eng); # Add button
    key_rus= types.InlineKeyboardButton(text = "Русский", callback_data = "rus")
    keyboard.add(key_rus)
    question = "Select the language in which the bot will work"
    bot.send_message(message.from_user.id, text = question, reply_markup = keyboard)

    @bot.callback_query_handler(func = lambda call: True)
    def callback_worker(call):
        global lng
        if call.data == "eng":
            bot.delete_message(chat_id = call.message.chat.id, message_id = call.message.message_id)
            sti = open("dicaprio.webp", "rb") # Sticker
            bot.send_sticker(message.chat.id, sti)
            markup = types.ReplyKeyboardMarkup(resize_keyboard = True) # Keyboard
            item1 = types.KeyboardButton("🎼 Decompose into notes")
            item2 = types.KeyboardButton("🔗 Link to project code")
            item3 = types.KeyboardButton("🚀 Restart Bot")
            markup.add(item1, item2, item3)
            bot.send_message(chat_id = call.message.chat.id, text = "Welcome, {0.first_name}!\nI'm - <b>{1.first_name}</b>, a Bot created to decompose a music track into sheet music".format(message.from_user, bot.get_me()),
                    parse_mode = "html", reply_markup = markup)
            lng = "eng"
        elif call.data == "rus":
            bot.delete_message(chat_id = call.message.chat.id, message_id = call.message.message_id)
            sti = open("putin.webp", "rb")
            bot.send_sticker(message.chat.id, sti)
            markup = types.ReplyKeyboardMarkup(resize_keyboard = True) # Keyboard
            item1 = types.KeyboardButton("🎼 Разложить на ноты")
            item2 = types.KeyboardButton("🔗 Ссылка на код проекта")
            item3 = types.KeyboardButton("🚀 Перезапуск Бота")
            markup.add(item1, item2, item3)
            bot.send_message(chat_id = call.message.chat.id, text = "Добро пожаловать, {0.first_name}!\nЯ - <b>{1.first_name}</b>, Бот, раскладывающий музыкальный трек на ноты".format(message.from_user, bot.get_me()),
                    parse_mode = "html", reply_markup = markup)
            lng = "rus"

@bot.message_handler(content_types = ["text", "document", "audio", "file", "sticker", "photo", "voice"])
def task(message):
    keyboard = types.InlineKeyboardMarkup()
    if message.chat.type == "private":
            if message.text == "🎼 Decompose into notes":
                bot.send_message(chat_id = message.chat.id, text = "Send <b>mp3</b> file".format(message.from_user, bot.get_me()),
                        parse_mode = "html")

            elif message.text == "🎼 Разложить на ноты":
                bot.send_message(chat_id = message.chat.id, text = "Отправьте <b>mp3</b> файл".format(message.from_user, bot.get_me()),
                        parse_mode = "html")

            elif message.text == "🔗 Link to project code":
                key_url = types.InlineKeyboardButton(text = "Tap here!", url = "https://github.com/alievgithub/music_decomposition")
                keyboard.add(key_url);
                bot.send_message(message.from_user.id, text = "URL to repository", reply_markup = keyboard)
                sti = open("tap.webp", "rb")
                bot.send_sticker(message.chat.id, sti)
            elif message.text == "🔗 Ссылка на код проекта":
                key_url = types.InlineKeyboardButton(text = "Нажми сюда!", url = "https://github.com/alievgithub/music_decomposition")
                keyboard.add(key_url);
                bot.send_message(message.from_user.id, text = "Ссылка на репозиторий", reply_markup = keyboard)
                sti = open("aim.webp", "rb")
                bot.send_sticker(message.chat.id, sti)
            elif message.text == "🚀 Restart Bot":
                bot.send_message(message.from_user.id, text = "Click on this command: /start", reply_markup = keyboard)
            elif message.text == "🚀 Перезапуск Бота":
                bot.send_message(message.from_user.id, text = "Нажмите на данную команду: /start", reply_markup = keyboard)
            else:
                if lng == "eng":
                    bot.send_message(message.from_user.id, text = "Choose from the options suggested on the Bot's keyboard", reply_markup = keyboard)
                elif lng == "rus":
                    bot.send_message(message.from_user.id, text = "Выберите из предложенных на клавиатуре Бота вариантов", reply_markup = keyboard)
                else:
                    bot.send_message(message.from_user.id, text = "Choose one of the languages ​​suggested below the message")

bot.polling(none_stop = True, interval = 0)
