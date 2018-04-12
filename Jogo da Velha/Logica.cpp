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
	bool temVencedor;
	int linha, coluna, jogadorAtual;
	char valor;
	int teste = 0;

	temVencedor = false;
	jogadorAtual = 1;
	valor = 'x';

	while (teste < 3) {
		system("cls");

		Design design;
		design.ExibirMensagemPrincipal();
		ExibirTabuleiro();

		cout << "\n\nJogador: " << jogadorAtual << endl;
		cout << "Informa a linha para iniciar a jogada: ";
		cin >> linha;
		cout << "Informa a coluna para encerrar a jogada: ";
		cin >> coluna;

		RealizarJogada(linha, coluna, valor);
		teste++;
	}
}

void Logica::ExibirTabuleiro() {
	int cont;

	cout << "\t\t\t-   0   1   2 \n\n";
	for (int i = 0; i < linha; i++) {
		cont = 0;
		cout << "\t\t\t" << i << "  ";

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
			cout << "\n\t\t\t   - - - - - -\n";
		}
	}
}

void Logica::RealizarJogada(int linha, int coluna, char valor) {
	tabuleiro[linha][coluna] = valor;
}
