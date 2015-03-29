#include <iostream>
#include <limits>
#include <stdlib.h>
#include <conio.h>

using namespace std;

const char ARROZ = 'A';
const char FEIJAO = 'F';
const char REFRIGERANTE = 'R';

char lista_produtos[100];

enum opcoes
{
	INCLUIR = 1,
	LISTAR = 2,
	SAIR = 0
};

void iniciar_produtos();
void imprimir_menu();
void incluir_produto(char produto);
void listar_produto();

int main()
{
	int opcao;
	char produto;
	
	iniciar_produtos();
	
	for (;;)
	{
		imprimir_menu();
		cin >> opcao;
		
		if (opcao == INCLUIR)
		{
			cout << "Digite o produto:" << endl;
			cin >> produto;
			incluir_produto(produto);
		}
		
		if (opcao == LISTAR)
			listar_produto();
			
		if (opcao == SAIR)
			break;
		system("cls");
	}
}

void iniciar_produtos()
{
	for (int i=0;i<100;i++)
		lista_produtos[i] = 'V';
}

void imprimir_menu()
{
	cout << "** LOJA DE PRODUTOS **" << endl;
	cout << "[1] - Incluir Produto" << endl;
	cout << "[2] - Listar Produto" << endl;
	cout << "[0] - Sair" << endl;
}

void incluir_produto(char produto)
{
	for (int i=0;i<100;i++)
	{
		if (lista_produtos[i] == 'V')
		{
			lista_produtos[i] = produto;
			cout << "Produto inserido com sucesso !!";
			getch();
			break;
		}
	}
}

void listar_produto()
{
	for (int i=0;i<100;i++)
	{
		switch (lista_produtos[i])
		{
			case ARROZ:
				cout << "Arroz" << endl;
				break;
			case FEIJAO:
				cout << "Feij�o" << endl;
				break;
			case REFRIGERANTE:
				cout << "Refrigerante" << endl;
				break;
		}
	}
	getch();
}
