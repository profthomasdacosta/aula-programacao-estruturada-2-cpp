#include <iostream>

using namespace std;

int main()
{
	int opcao;
	cout << "Informe uma op��o (1,2,3):";
	cin >> opcao;

	switch (opcao)
	{
		case 1:
			cout << "Op��o 1 Selecionada";
			break;
		case 2:
			cout << "Op��o 2 Selecionada";
			break;
		case 3:	
			cout << "Op��o 3 Selecionada";
			break;
		default:
			cout << "Nenhuma Op��o Selecionada";
			break;
	}	
}
