#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "stdafx.h"
#include "Design.h"

using namespace std;

const int LINHA = 3, COLUNA = 3, COLUNA_VET = 5;

Design::Design() { }

Design::~Design() { }

void Design::ExibirTabuleiro(char tabuleiro[3][3]) {
	int cont;

	cout << "\t\t*********** Jogo da Velha ************\n\n";
	cout << "\t\t\t-   0   1   2 \n\n";
	for (int i = 0; i < LINHA; i++) {
		cont = 0;
		cout << "\t\t\t" << i << "  ";

		for (int j = 0; j < COLUNA_VET; j++) {
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

		if (i < LINHA - 1) {
			cout << "\n\t\t\t   - - - - - -\n";
		}
	}
}

void Design::ExibirMensagemPrincipal() {
	cout << "\t\t*********** Jogo da Velha ************\n\n";
}

void Design::ExibirApresentacao() {
	system("cls");
	cout << "\t\t*********** Jogo da Velha ************\n\n";
	cout << "Bem vindo ao Jogo da Velha\n" << endl;
	cout << "1 - Dois jogadores" << endl;
	cout << "2 - Jogador 1 joga com x" << endl;
	cout << "3 - Jogador 2 joga com o" << endl;
	cout << "4 - Vence quem fizer a sequencia de 3 elementos seguidos" << endl;
	cout << "\nPresione qualquer techa para jogar ou zero para sair" << endl;
	cout << "Presione enter para prosseguir: ";
}

void Design::ExibirEncerramento() {
	cout << "\t\t*********** Jogo da Velha ************\n\n";
	cout << "\n\nJogo encerrado.\n\n" << endl;
}

void Design::ExibirMensagemExcecao(char msg[]) {
	system("cls");
	cout << "\t\t*********** Jogo da Velha ************\n\n";
	cout << "\n\n" << msg << "\n\n";
	system("pause");
}

void Design::ExibirMensagemEmpate() {
	cout << "\n\nFim de Jogo, nao houve vencedor...\n\n";
	system("pause");
}

void Design::ExibirMensagemVencendor(int jogadorAtual) {
	cout << "\n\nFim de Jogo, vencedor: Jogador " << jogadorAtual << ".\n\n";
	system("pause");
}