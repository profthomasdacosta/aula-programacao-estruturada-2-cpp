/**

	Grava��o de um arquivo com v�rias linhas

**/
#include <iostream>
#include <fstream>
#include <strings.h>

using namespace std;

void gravar_arquivo();

int main()
{
	gravar_arquivo();
}

void gravar_arquivo()
{
	string valor;
	
	ofstream ofs;
	ofs.open("arquivo_linhas.txt", ios::out);
	
	valor = "O que s�o fun��es:";
	ofs << valor << endl;
	
	valor = "S�o rotinas que tem como objetivo, "
			"executar trechos de c�digos de forma modular, "
			"melhorando a organiza��o do programa e evitando repeti��o de c�digo.";
	ofs << valor << endl;	
	
	valor = "As fun��es s�o reutiliz�veis dentro de um programa.";
	ofs << valor << endl;	
	
	ofs.close();	
}
