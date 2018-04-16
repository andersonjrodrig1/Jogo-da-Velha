#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "stdafx.h"
#include "Jogo.h"
#include "Logica.h"
#include "Design.h"
#include <conio.h>

using namespace std;

Jogo::Jogo() { }

Jogo::~Jogo() { }

void Jogo::IniciarJogo() {
	char op;
	Logica logica;
	Design design;

	do {
		design.ExibirApresentacao();
		cin >> op;

		if (op != '0') {
			logica.Jogar();
		}
	} while (op != '0');
}