Music Lyrics Translator
Descrição
O Music Lyrics Translator é um projeto desenvolvido para coletar letras de músicas da web, utilizando técnicas de web scraping, e traduzi-las para outro idioma utilizando a API de tradução do Google. Este projeto foi criado com o objetivo de aprendizado e estudo de técnicas de scraping e uso de APIs em Python.

Funcionalidades
Busca letras de músicas de sites específicos.
Tradução automática das letras para o idioma desejado.
Armazenamento das letras originais e traduzidas.
Limitações
Sites Específicos: O scraping é atualmente limitado a sites específicos de letras, como o AZLyrics.
Dependência de Estrutura de Página: Mudanças na estrutura dos sites de letras podem quebrar o scraper.
Limite da API: A tradução depende da disponibilidade e das cotas de uso da API de tradução do Google.
Idioma Suportado: O suporte a idiomas depende da API de tradução usada.
Requisitos

Para rodar este projeto, você precisa ter o seguinte instalado em sua máquina:

Python 3.7 ou superior
Bibliotecas Python:
requests
beautifulsoup4
googletrans ou googletrans==4.0.0-rc1
