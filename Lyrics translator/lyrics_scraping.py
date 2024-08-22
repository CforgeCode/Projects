import requests
from bs4 import BeautifulSoup


def get_lyrics(song_title, artist_name):
    # URL básica de exemplo (modifique de acordo com o site que está usando)
    base_url = f"https://www.azlyrics.com/lyrics/{artist_name.replace(' ', '').lower()}/{song_title.replace(' ', '').lower()}.html"
    #print(base_url)

    response = requests.get(base_url)
    response.raise_for_status()

    soup = BeautifulSoup(response.text, 'html.parser')
    lyrics_div = soup.find('div', class_="col-xs-12 col-lg-8 text-center")
    lyrics = lyrics_div.find_all('div')[5].get_text(separator='\n')

    return lyrics
