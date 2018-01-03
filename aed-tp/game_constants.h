#pragma once

#define NUMERO_JOGADORES_PLANTEL 20
#define NUMERO_EQUIPAS 18
#define NUMERO_TRANSFERENCIAS 3

// Menu constants

enum MENU_INICIAL {

	MENU_INICIAL_OPCAO_NULA = -1,
	MENU_INICIAL_OPCAO_SAIR,
	MENU_INICIAL_OPCAO_CONTINUAR,
	MENU_INICIAL_OPCAO_NOVO_JOGO

};

enum MENU_NOVO_JOGO {

	MENU_NOVO_JOGO_OPCAO_NULA = -1,
	MENU_NOVO_JOGO_OPCAO_SAIR,
	MENU_NOVO_JOGO_OPCAO_INSERIR_NOME,
	MENU_NOVO_JOGO_OPCAO_ESCOLHER_EQUIPA

};

enum MENU_PREPARACAO_EPOCA {

	MENU_PREPARACAO_EPOCA_OPCAO_NULA = -1,
	MENU_PREPARACAO_EPOCA_OPCAO_SAIR,
	MENU_PREPARACAO_EPOCA_OPCAO_TRANSFERENCIA_JOGADORES,
	MENU_PREPARACAO_EPOCA_OPCAO_INFORMACAO,
	MENU_PREPARACAO_EPOCA_INICIAR_EPOCA

};
