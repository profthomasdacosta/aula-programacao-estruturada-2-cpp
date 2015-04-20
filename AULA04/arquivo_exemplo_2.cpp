/**

	Leitura simples de arquivo

**/
#include <iostream>
#include <fstream>
#include <strings.h>

using namespace std;

void ler_arquivo();

int main()
{
	ler_arquivo();
}

void ler_arquivo()
{
	string valor;

	ifstream ifs;
	ifs.open("ola_mundo.txt", ios::in);	
	
	if (!ifs.is_open())
	{
		cout << "N�o foi possivel abrir o arquivo" << endl;
		return;
	}
	
	getline(ifs, valor);
	cout << "Conte�do do Arquivo:" << valor << endl;
	ifs.close();
}
