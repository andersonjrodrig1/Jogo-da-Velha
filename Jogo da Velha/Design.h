#pragma once
class Design
{
	public:
		Design();
		virtual ~Design();
		void ExibirTabuleiro(char tabuleiro[3][3]);
		void ExibirMensagemPrincipal();
		void ExibirApresentacao();
		void ExibirEncerramento();
		void ExibirMensagemExcecao(char msg[]);
		void ExibirMensagemEmpate();
		void ExibirMensagemVencendor(int jogadorAtual);
};

