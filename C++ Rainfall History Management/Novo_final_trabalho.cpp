#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <conio.h> // Para _kbhit() e _getch()
#define QT_ANOS 10
#define QT_MESES 12


using namespace std;

string meses[QT_MESES] = {"Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out", "Nov", "Dez"};

void iniciaMatrizPrecipitacao(float precipitacao[][QT_MESES]) {
    precipitacao[0][0] = 5.01; precipitacao[0][1] = 12.64; precipitacao[0][2] = 8.37; precipitacao[0][3] = 3.25; precipitacao[0][4] = 6.93; 
    precipitacao[0][5] = 17.94; precipitacao[0][6] = 3.65; precipitacao[0][7] = 2.45; precipitacao[0][8] = 9.84; precipitacao[0][9] = 6.99; 
    precipitacao[0][10] = 4.35; precipitacao[0][11] = 5.27; 

    precipitacao[1][0] = 10.58; precipitacao[1][1] = 7.67; precipitacao[1][2] = 7.03; precipitacao[1][3] = 5.05; precipitacao[1][4] = 7.07; 
    precipitacao[1][5] = 9.47; precipitacao[1][6] = 2.09; precipitacao[1][7] = 3.24; precipitacao[1][8] = 12.56; precipitacao[1][9] = 2.63; 
    precipitacao[1][10] = 5.57; precipitacao[1][11] = 6.01; 

    precipitacao[2][0] = 7.45; precipitacao[2][1] = 8.29; precipitacao[2][2] = 5.74; precipitacao[2][3] = 3.72; precipitacao[2][4] = 5.61; 
    precipitacao[2][5] = 5.5; precipitacao[2][6] = 11.75; precipitacao[2][7] = 2.3; precipitacao[2][8] = 6.57; precipitacao[2][9] = 8.75; 
    precipitacao[2][10] = 10.02; precipitacao[2][11] = 11.64; 

    precipitacao[3][0] = 7.1; precipitacao[3][1] = 9.27; precipitacao[3][2] = 5.85; precipitacao[3][3] = 3.6; precipitacao[3][4] = 5.85; 
    precipitacao[3][5] = 3.9; precipitacao[3][6] = 2.65; precipitacao[3][7] = 8.83; precipitacao[3][8] = 2.19; precipitacao[3][9] = 6.38; 
    precipitacao[3][10] = 3.74; precipitacao[3][11] = 7.61; 

    precipitacao[4][0] = 6.04; precipitacao[4][1] = 7.01; precipitacao[4][2] = 3.66; precipitacao[4][3] = 4.58; precipitacao[4][4] = 5.2; 
    precipitacao[4][5] = 4.76; precipitacao[4][6] = 0.21; precipitacao[4][7] = 4.08; precipitacao[4][8] = 1.5; precipitacao[4][9] = 8.27; 
    precipitacao[4][10] = 5.72; precipitacao[4][11] = 8.76; 

    precipitacao[5][0] = 9.12; precipitacao[5][1] = 4.08; precipitacao[5][2] = 6.39; precipitacao[5][3] = 0.22; precipitacao[5][4] = 1.91; 
    precipitacao[5][5] = 4.8; precipitacao[5][6] = 0.75; precipitacao[5][7] = 3.26; precipitacao[5][8] = 5.28; precipitacao[5][9] = 7.87; 
    precipitacao[5][10] = 4.3; precipitacao[5][11] = 4.54; 

    precipitacao[6][0] = 7.17; precipitacao[6][1] = 6.67; precipitacao[6][2] = 3.75; precipitacao[6][3] = 5.43; precipitacao[6][4] = 9.28; 
    precipitacao[6][5] = 1.56; precipitacao[6][6] = 0.86; precipitacao[6][7] = 1.24; precipitacao[6][8] = 5.14; precipitacao[6][9] = 4.27; 
    precipitacao[6][10] = 5.72; precipitacao[6][11] = 7.87; 

    precipitacao[7][0] = 4.39; precipitacao[7][1] = 4.19; precipitacao[7][2] = 1.61; precipitacao[7][3] = 1.64; precipitacao[7][4] = 4.06; 
    precipitacao[7][5] = 5.85; precipitacao[7][6] = 0.96; precipitacao[7][7] = 8.15; precipitacao[7][8] = 0.85; precipitacao[7][9] = 2.21; 
    precipitacao[7][10] = 5.4; precipitacao[7][11] = 8.16; 

    precipitacao[8][0] = 10.65; precipitacao[8][1] = 1.66; precipitacao[8][2] = 5.61; precipitacao[8][3] = 0.6; precipitacao[8][4] = 3.15; 
    precipitacao[8][5] = 6.09; precipitacao[8][6] = 1.5; precipitacao[8][7] = 2.43; precipitacao[8][8] = 2.47; precipitacao[8][9] = 9.27; 
    precipitacao[8][10] = 3.03; precipitacao[8][11] = 1.12; 

    precipitacao[9][0] = 5.47; precipitacao[9][1] = 2.52; precipitacao[9][2] = 8.94; precipitacao[9][3] = 5.01; precipitacao[9][4] = 4.33; 
    precipitacao[9][5] = 4.19; precipitacao[9][6] = 0.74; precipitacao[9][7] = 6.31; precipitacao[9][8] = 7.48; precipitacao[9][9] = 8.07; 
    precipitacao[9][10] = 2.9; precipitacao[9][11] = 5.88; 
}

// Procedimento para listar a matriz de precipitação
void listaPrecipitacao(float precipitacao[][QT_MESES]) {
	cout << "\t";
    for (int i = 0; i < QT_MESES; i++) {
        cout << "\t" << meses[i];
    }
    cout << endl;
    
    for (int i = 0; i < QT_ANOS; i++) {
        cout << "Ano " << (i + 2013) << "\t";
        for (int j = 0; j < QT_MESES; j++) {
            cout << precipitacao[i][j] << "\t";    
        }
        cout << endl;
    }
}

// Função que retorna um índice válido de um vetor de meses ou anos
int retornaIndice(string vetor[], int tamanho, string tipo) {
    int i;
    cout << "a) Digite um índice para atualizar; ou\nb) Digite um número negativo para sair\n";
    for (i = 0; i < tamanho; i++) {
        if (tipo == "ano") {
            cout << "[" << i << "] " << 2013 + i << endl;
        } else if (tipo == "mes") {
            cout << "[" << i << "] " << vetor[i] << endl;
        }
    }
    while (true) {
        cout << "Digite o índice: ";
        cin >> i;
        if ((i >= 0) && (i < tamanho)) {
            return i;
        } else if (i < 0) {
            return i;
        } else {
            cout << "Índice inválido! Tente novamente." << endl;
        }
    }
}
//FUNÇÃO QUE ATUALIZA OS DADOS DE PRECIPITAÇÃO
void atualizaPrecipitacao(float precipitacao[][QT_MESES]) {
    int iAno = retornaIndice(meses, QT_ANOS, "ano");
    int iMes = retornaIndice(meses, QT_MESES, "mes");
    float novoValor;
    if(iAno >= 0){
    	if (iMes >= 0){
    		cout << "Digite o novo valor de precipitação para " << (iAno + 2013) << " do mês " << meses[iMes] << ": ";
        	cin >> precipitacao[iAno][iMes];
        	listaPrecipitacao(precipitacao);
		}
	}
}

void anosMaisChuva(float precipitacao[][QT_MESES]) {
	int soma, max = 0, min = 100;

	// laço que determina qual é o somatório máximo - maior volume de chuva por ano 
	for (int l = 0; l < QT_ANOS; l++) {
		soma = 0;
		for (int c = 0; c < QT_MESES; c++) {
			soma += precipitacao[l][c];
		}
		if (soma > max) {
			max = soma;
		}
		if (soma < min){
			min = soma;
		}
	}

	// laço que lista os anos com maior somatório 
	for (int l = 0; l < QT_ANOS; l++) {
		soma = 0;
		for (int c = 0; c < QT_MESES; c++) {
			soma += precipitacao[l][c];
		}
		if (soma == max) {
			cout<<" \n";
			cout << "O ano com mais chuva foi o ano de " << 2013 + l<< " com as medias mensais somadas de " << max << "mm de chuva" << endl;
			cout<<" \n";
		}
		if (soma == min) {
			cout<<" \n";
			cout << "O ano de menos chuva foi o ano de " << 2013 + l<< " com as medias mensais somadas de " << min << "mm de chuva" << endl;
			cout<<" \n";
		}
	}
}

void mesMaisChuva(float precipitacao[][QT_MESES]) {
	int soma, max = 0, min, c=0, d=0;
	min = 100;
	// laço que determina qual é o somatório máximo - maior volume de chuva por ano 
	for (int l = 0; l < QT_ANOS; l++) {
		soma = 0;
		while (c < QT_MESES) {
			soma += precipitacao[l][c];
			c++;		
			if (soma > max) {
				max = soma;
			}
			if (soma < min){
				min = soma;
			}
		}
	}

	// laço que lista os anos com maior somatório 
	for (int l = 0; l < QT_ANOS; l++) {
		soma = 0;
		while (d < QT_MESES) {
			soma += precipitacao[l][d];

			if (soma == max) {
				cout<<" \n";
				cout <<"o mes com o mais chuvas foi o mes de "<< meses[d] << " com as as medias mensais somadas de " << max << "mm de chuva" << endl;
				cout<<" \n";
			}
			if (soma == min){
				cout<<" \n";
				cout <<"o mes de menos chuva foi o mes de "<< meses[d] << " com as as medias mensais somadas de " << min << "mm de chuva" << endl;
				cout<<" \n";
			}
		d++;
		}
	}
}
void mediaAnosChuva(float precipitacao[][QT_MESES]) {
	float soma, max = 0;
	int c = 0;
	cout<<" \n";
	// laço que determina qual é o somatório máximo - maior volume de chuva por ano 
	for (int l = 0; l < QT_ANOS; l++) {
		soma = 0;
        for (int c = 0; c < QT_MESES; c++) {
            soma += precipitacao[l][c];
        }
        float media = soma / QT_MESES;
        cout << "ANO " << (2013 + l) << " MEDIA " << media << endl; 
    }	
	cout<<" \n";
}
void mediaMesesChuva(float precipitacao[][QT_MESES]) {
    float soma;
    cout<<" \n";
    for (int c = 0; c < QT_MESES; c++) {
        soma = 0;
        for (int l = 0; l < QT_ANOS; l++) {
            soma += precipitacao[l][c];
        }
        float media = soma / QT_ANOS;
        cout << "Mês de " << meses[c] << ", com a média de " << media << " mm" << endl;	
	}	
	cout<<" \n";
}
void grafMediaMesesChuva(float precipitacao[][QT_MESES], string meses[]) {
	cout << "\nGráfico de Média mensal de Precipitação:\n";
    float soma;
    cout<<" \n";
    for (int c = 0; c < QT_MESES; c++) {
        soma = 0;
        for (int l = 0; l < QT_ANOS; l++) {
            soma += precipitacao[l][c];
        }
        float media = soma / QT_ANOS;
		cout << setw(3) << meses[c] << " | ";
       
        for (int i = 0; i < media; i++) {
            cout << "#";
        }
		cout << " (" << media << " mm)" << endl;
	}	
	cout<<" \n";
}
void graficoMediaAnualPrecipitacao(float precipitacao[][QT_MESES]) {
    cout << "\nGráfico de Média Anual de Precipitação:\n";
    for (int ano = 0; ano < QT_ANOS; ano++) {
        float soma = 0;
        for (int mes = 0; mes < QT_MESES; mes++) {
            soma += precipitacao[ano][mes];
        }
        float media = soma / QT_MESES;
        cout << 2013 + ano << ": ";
        for (int i = 0; i < media; i++) {
            cout << "*";
		}
	cout << " " << fixed << setprecision(2) << media << " mm\n";
	}
}

void setCursorPosition(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void clearScreen() {
    system("cls");
}

void chuvaAnimacao() {
    const int screenWidth = 80;
    const int screenHeight = 25;
    const int numDrops = 20;

    vector<int> dropX(numDrops);
    vector<int> dropY(numDrops);

    srand(static_cast<unsigned int>(time(0)));

    // Inicializa as posições das gotas de chuva
    for (int i = 0; i < numDrops; ++i) {
        dropX[i] = rand() % screenWidth;
        dropY[i] = rand() % screenHeight;
    }

    while (true) {
        if (_kbhit()) {
            // Se uma tecla foi pressionada, sai do loop
            break;
        }

        clearScreen();
        
        // Atualiza e desenha as gotas de chuva
        for (int i = 0; i < numDrops; ++i) {
            setCursorPosition(dropX[i], dropY[i]);
            cout << "|";
            dropY[i]++;

            // Se a gota de chuva atingir o fundo da tela, reinicie-a no topo
            if (dropY[i] >= screenHeight) {
                dropY[i] = 0;
                dropX[i] = rand() % screenWidth;
            }
        }

        // Pausa para criar o efeito de animação
        Sleep(100);
    }

    // Mensagem de saída
    setCursorPosition(0, screenHeight);
    cout << "Animação de chuva encerrada. Pressione qualquer tecla para voltar ao menu.";
    _getch(); 
}



//PROGRAMA PRINCIPAL
	
int main() {
    float precipitacao[QT_ANOS][QT_MESES];
    iniciaMatrizPrecipitacao(precipitacao);
    cout<<fixed;
    cout.precision(2);
	std::wcout.imbue(std::locale());
	
    int opcao = 0;
    while (opcao != 11) {
        cout << "----------------------------------------------\n";
        cout << "Precipitação dos últimos 10 anos em Guarapuava\n";
        cout << "----------------------------------------------\n";
        cout << "Escolha uma opção:\n";
        cout << "\033[1;31m1\033[0m." << " Inicializar dados de precipitação\n";
        cout << "\033[1;31m2\033[0m." << " Listar dados de precipitação\n";
        cout << "\033[1;31m3\033[0m." << " Atualizar dados de precipitação\n";
        cout << "\033[1;31m4\033[0m." << " Ano com mais e menos chuva\n";
        cout << "\033[1;31m5\033[0m." << " Mes com mais e menos chuva\n";
        cout << "\033[1;31m6\033[0m." << " Média de chuva por ano\n";
        cout << "\033[1;31m7\033[0m." << " Gráfico de Média de chuva por ano\n";
        cout << "\033[1;31m8\033[0m." << " Média de chuva por mes\n";
        cout << "\033[1;31m9\033[0m." << " Gráfico em ACSII da Média de chuva por mes\n";
        cout << "\033[1;31m10\033[0m." << " Animação de chuva para relaxar(clique qualquer tecla para exibir ao menu)\n";
		cout << "\033[1;31m11\033[0m." << " Sair\n";
        cout << "Opção: ";
        cin >> opcao;
        switch (opcao) {
            case 1:
                iniciaMatrizPrecipitacao(precipitacao);
                break;
            case 2:
                listaPrecipitacao(precipitacao);
                break;
            case 3:
                atualizaPrecipitacao(precipitacao);
                break;
            case 4:
            	anosMaisChuva(precipitacao);
            	break;
            case 5:
            	mesMaisChuva(precipitacao);
            	break;
            case 6:
            	mediaAnosChuva(precipitacao);
            	break;
            case 7:
            	graficoMediaAnualPrecipitacao(precipitacao);
            	break;
            case 8:
				mediaMesesChuva(precipitacao);
            	break;
            case 9:
            	grafMediaMesesChuva(precipitacao, meses);
            	break;
            case 10:
            	chuvaAnimacao();
            	break;
            case 11:
                cout << "Encerrando o programa...\n";
                break;
            default:
                cout <<	"Opção inválida! Tente novamente.\n";
                system("pause");
        }
    }
    return 0;
}

