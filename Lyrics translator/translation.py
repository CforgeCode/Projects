from googletrans import Translator

from googletrans import Translator

def translate_lyrics(lyrics, src_lang='auto', dest_lang='pt'):
    translator = Translator()
    translated = translator.translate(lyrics, src=src_lang, dest=dest_lang)
    return translated.text
