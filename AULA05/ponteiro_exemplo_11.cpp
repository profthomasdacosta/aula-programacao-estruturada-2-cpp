#include <iostream>
#include <strings.h>

using namespace std;

int main()
{
	char valores[100];
	char *ptr;
	
	strcpy(valores, "Isto � um teste");
	ptr = valores;
	
	cout << valores << endl;
	cout << ptr << endl;
	
	ptr = (char *)"Isto � um outro teste";
	cout << ptr << endl;
	
	cout << valores[3] << endl;
	cout << *(ptr+3) << endl;
}
