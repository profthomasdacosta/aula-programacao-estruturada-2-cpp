#include <iostream>
#include <strings.h>

using namespace std;

typedef char valores[100];

int main()
{
	valores val;
	strcpy(val, "Programa��o Estruturada II");
	cout << "Tipo do usu�rio:" << val;
}
