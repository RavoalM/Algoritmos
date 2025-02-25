#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "Portuguese");
	//Soma de dois numeros
	
	//entrada
	float n1, n2, resultado;
	
	//coleta de dados
	cout << "Informe o primeiro nuemro: ";
	cin >> n1;
	cout << "Informe o segundo numero: ";
	cin >> n2;
	cout << endl << endl;
	
	//processo
	resultado = n1 + n2;
	
	//saida
	cout << "O resultado da sua soma é " << resultado;
}
