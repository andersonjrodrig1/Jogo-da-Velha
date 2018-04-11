#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "stdafx.h"
#include "Jogo.h"
#include "Logica.h"
#include "Design.h"

using namespace std;

Jogo::Jogo() { }

Jogo::~Jogo() { }

void Jogo::IniciarJogo() {
	char op;

	Logica logica;
	Design design;

	design.ExibirApresentacao();

	cin >> op;

	if (op != '0') {
		logica.Jogar();
	} else {
		system("cls");
		design.ExibirEncerramento();
		system("pause");
		exit(0);
	}
}