#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "stdafx.h"
#include "Design.h"

using namespace std;

const int linha = 3, coluna = 3;
const int colunaVet = 5;
char tabuleiro[linha][coluna];

Design::Design() { }

Design::~Design() { }

void Design::Apresentacao() {
	cout << "\t\t*********** Jogo da Velha ************\n\n";
}

void Design::Tabuleiro() {
	int cont;

	cout << "-  0   1   2 \n";
	for (int i = 0; i < linha; i++) {
		cont = 0;
		cout << i << " ";

		for (int j = 0; j < colunaVet; j++) {
			if (j % 2 != 0) {
				cout << "|";
			} else {
				if (tabuleiro[i][cont] == NULL)
					cout << "   ";
				else {
					char texto = tabuleiro[i][cont];
					cout << " " << texto << " ";
				}

				cont++;
			}
		}

		if (i < linha -1) {
			cout << "\n  - - - - - -\n";
		}
	}
}

void Design::Dicas() {
	cout << "\n\n" << endl;
	cout << "1 - Dois jogadores" << endl;
	cout << "2 - Jogador 1 joga com x" << endl;
	cout << "3 - Jogador 2 joga com o" << endl;
	cout << "4 - Vence quem fizer a sequencia de 3 elementos seguidos" << endl;
}

void Design::Jogar() {
	int linha, coluna;

	cout << "\nInforme a posicao desejada" << endl;
	cout << "Digite a linha: ";
	cin >> linha;
	cout << "Digite a coluna: ";
	cin >> coluna;

	tabuleiro[linha][coluna] = 'x';
}