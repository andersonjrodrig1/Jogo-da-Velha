#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "stdafx.h"
#include "Logica.h"
#include "Design.h"

using namespace std;

const int linha = 3, coluna = 3;
const int colunaVet = 5;
char tabuleiro[linha][coluna];

Logica::Logica() { }

Logica::~Logica() { }

void Logica::Jogar() {
	system("cls");

	Design design;
	design.ExibirMensagemPrincipal();
	ExibirTabuleiro();

	system("pause");

}

void Logica::ExibirTabuleiro() {
	int cont;

	cout << "-  0   1   2 \n";
	for (int i = 0; i < linha; i++) {
		cont = 0;
		cout << i << " ";

		for (int j = 0; j < colunaVet; j++) {
			if (j % 2 != 0) {
				cout << "|";
			}
			else {
				if (tabuleiro[i][cont] == NULL)
					cout << "   ";
				else {
					char texto = tabuleiro[i][cont];
					cout << " " << texto << " ";
				}

				cont++;
			}
		}

		if (i < linha - 1) {
			cout << "\n  - - - - - -\n";
		}
	}
}

void Logica::RealizarJogada(int linha, int coluna) {
	tabuleiro[linha][coluna] = 'x';
}
