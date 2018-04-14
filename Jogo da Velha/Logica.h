#pragma once
class Logica
{
	public:
		Logica();
		~Logica();
		void Jogar();
		void RegistrarJogada(int linha, int coluna, char valor);
		bool IsJogadaValida(int linha, int coluna);
		bool IsFimJogo(char valor);
		bool IsTabuleiroCheio();
};

