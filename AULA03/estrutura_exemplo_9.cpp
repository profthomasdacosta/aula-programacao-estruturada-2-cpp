#include <iostream>
#include <string.h>

using namespace std;

struct aluno
{
	char nome[100];
	int ra;
};

int main()
{
	struct aluno alunos[10];
	cout << "Digite o nome do 1� aluno:" << endl;
	gets(alunos[0].nome);
	
	cout << "Nome do 1� aluno:" 
			<< alunos[0].nome << endl;
}
