#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "stdafx.h"
#include "Design.h"

using namespace std;

Design::Design() { }

Design::~Design() { }

void Design::ExibirMensagemPrincipal() {
	cout << "\t\t*********** Jogo da Velha ************\n\n";
}

void Design::ExibirApresentacao() {
	cout << "\nBem vindo ao Jogo da Velha\n" << endl;
	cout << "1 - Dois jogadores" << endl;
	cout << "2 - Jogador 1 joga com x" << endl;
	cout << "3 - Jogador 2 joga com o" << endl;
	cout << "4 - Vence quem fizer a sequencia de 3 elementos seguidos" << endl;
	cout << "\nPresione qualquer techa para jogar ou zero para sair: ";
}

void Design::ExibirEncerramento() {
	cout << "\nJogo encerrado.\n\n" << endl;
}