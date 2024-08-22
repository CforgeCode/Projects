from lyrics_scraping import get_lyrics
from translation import translate_lyrics


def main():
    # Detalhes da música
    song_title = input("Musica name: ")
    artist_name =input("artist name: ")

    # Buscar letras
    lyrics = get_lyrics(song_title, artist_name)

    # Traduzir letras
    translated_lyrics = translate_lyrics(lyrics)

    # Exibir letras traduzidas
    #print("Letra Original:\n", lyrics)
    print("\nLetra Traduzida:\n", translated_lyrics)


if __name__ == "__main__":
    main()
