#include <iostream>

using namespace std;

/**

	Autor: Thom�s da Costa
	Data de Cria��o: 01/01/2015

	Titulo: Programa que efetua o c�lculo de uma progress�o aritm�tica
	
	Descritivo: Progress�o aritm�tica � um tipo de seq��ncia num�rica que a partir
	do segundo elemento cada termo (elemento) � a soma do seu antecessor por uma constante.
	
**/
int main()
{
	const int TOTAL_PA = 10; 	// Limite total da progress�o aritm�tica
	int razao = 2; 				// Raz�o da progress�o
	int i = 0; 					// Indice para efetuar o loop da progress�o
	int resultadoPa = 0;		// Resultado da posi��o da PA
	int resultadoAntPa = 3;		// Resultado anterior da posicao da PA
	
	// Efetuado o c�lculo da progress�o de acordo
	for (;i<=TOTAL_PA;i++)
	{
		// C�lculo da progress�o ocorre indice atual mais a raz�o
		resultadoPa = resultadoAntPa + razao;
		resultadoAntPa = resultadoPa;
		
		// Imprime valor na tela da PA
		cout << resultadoPa << "\n";
	}
	
}

