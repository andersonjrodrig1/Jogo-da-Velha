#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "stdafx.h"
#include "Logica.h"
#include "Design.h"

using namespace std;

const int JOGADOR_UM = 1, JOGADOR_DOIS = 2, LINHA = 3, COLUNA = 3;
const char VALOR_JOGADOR_UM = 'X', VALOR_JOGADOR_DOIS = 'O';
char tabuleiro[LINHA][COLUNA];

Logica::Logica() { }

Logica::~Logica() { }

void Logica::Jogar() {
	Design design;

	bool isVencedor, isJogadaValida, isTabuleiroCheio, isFimJogo;
	int linha, coluna, jogadorAtual;
	char valor;

	isVencedor = false;
	isFimJogo = false;
	isTabuleiroCheio = false;
	jogadorAtual = JOGADOR_UM;
	valor = VALOR_JOGADOR_UM;

	while (!isFimJogo && !isTabuleiroCheio) {
		do {
			system("cls");

			design.ExibirTabuleiro(tabuleiro);

			cout << "\n\nJogador: " << jogadorAtual << endl;
			cout << "Informa a linha para iniciar a jogada: ";
			cin >> linha;
			cout << "Informa a coluna para encerrar a jogada: ";
			cin >> coluna;

			isJogadaValida = true;

			if (linha >= LINHA || coluna >= COLUNA) {
				isJogadaValida = false;
			}

			if (isJogadaValida) {
				isJogadaValida = IsJogadaValida(linha, coluna);
			}			

			if (!isJogadaValida) {
				char mensagem[] = "Jogada invalida. Tente novamente...";
				design.ExibirMensagemExcecao(mensagem);
			}
		} while (!isJogadaValida);

		RegistrarJogada(linha, coluna, valor);
		isFimJogo = IsFimJogo(valor);
		isTabuleiroCheio = IsTabuleiroCheio();

		if (!isFimJogo && !isTabuleiroCheio) {
			if (jogadorAtual == JOGADOR_UM) {
				jogadorAtual = JOGADOR_DOIS;
				valor = VALOR_JOGADOR_DOIS;
			} else {
				jogadorAtual = JOGADOR_UM;
				valor = VALOR_JOGADOR_UM;
			}
		} else {
			system("cls");
			design.ExibirTabuleiro(tabuleiro);

			if (isTabuleiroCheio) {
				design.ExibirMensagemEmpate();
			}

			if (isFimJogo) {
				design.ExibirMensagemVencendor(jogadorAtual);
			}
		}
	}
}

void Logica::RegistrarJogada(int linha, int coluna, char valor) {
	tabuleiro[linha][coluna] = valor;
}

bool Logica::IsJogadaValida(int linha, int coluna) {
	if (tabuleiro[linha][coluna] == NULL) {
		return true;
	}

	return false;
}

bool Logica::IsFimJogo(char valor) {
	if (tabuleiro[0][0] == valor && tabuleiro[0][1] == valor && tabuleiro[0][2] == valor) {
		return true;
	}
	
	if (tabuleiro[1][0] == valor && tabuleiro[1][1] == valor && tabuleiro[1][2] == valor) {
		return true;
	}

	if (tabuleiro[2][0] == valor && tabuleiro[2][1] == valor && tabuleiro[2][2] == valor) {
		return true;
	}

	if (tabuleiro[0][0] == valor && tabuleiro[1][0] == valor && tabuleiro[2][0] == valor) {
		return true;
	}

	if (tabuleiro[0][1] == valor && tabuleiro[1][1] == valor && tabuleiro[2][1] == valor) {
		return true;
	}

	if (tabuleiro[0][2] == valor && tabuleiro[1][2] == valor && tabuleiro[2][2] == valor) {
		return true;
	}

	if (tabuleiro[0][0] == valor && tabuleiro[1][1] == valor && tabuleiro[2][2] == valor) {
		return true;
	}

	if (tabuleiro[0][2] == valor && tabuleiro[1][1] == valor && tabuleiro[2][0] == valor) {
		return true;
	}

	return false;
}

bool Logica::IsTabuleiroCheio() {
	int cont = 0;
	int ttlColunasTabuleiro = 0;

	for (int i = 0; i < LINHA; i++) {
		for (int j = 0; j < COLUNA; j++) {
			if (tabuleiro[i][j] != NULL) {
				cont++;
			}
		}
	}

	ttlColunasTabuleiro = LINHA * COLUNA;

	if (ttlColunasTabuleiro == cont) {
		return true;
	}

	return false;
}
