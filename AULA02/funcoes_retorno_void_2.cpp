#include <iostream>

using namespace std;

void dividir(int x, int y);

int main()
{
	int x, y;
	cout << "Digite os valores para dividir:\n";
	cin >> x >> y;
	dividir(x, y);
}

void dividir(int x, int y)
{
	if (y == 0)
	{
		cout << "N�o dividir�s por zero";
		return;
	}
	cout << "Valor da Divis�o:" << x / y;
}
