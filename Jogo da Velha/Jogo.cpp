#include "stdafx.h"
#include "Jogo.h"
#include "Design.h"

Jogo::Jogo() { }

Jogo::~Jogo() { }

void Jogo::IniciarJogo() {
	Design design;
	design.Apresentacao();
	design.Tabuleiro();
	design.Dicas();
	design.Jogar();

	system("cls");

	design.Apresentacao();
	design.Tabuleiro();
}
