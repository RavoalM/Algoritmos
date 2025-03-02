#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "Portuguese");
	//Converter dolar para real
	
	//entrada
	float n1, n2, resultado;
	
	//coleta de dados
	cout << "Informe o valor atual do dolar: ";
	cin >> n1;
	cout << "Informe a quantia em dolares para ser convertida: ";
	cin >> n2;
	cout << endl << endl;
	
	//processo
	resultado = n1 * n2;
	
	//saida
	cout << "Atualmente U$" << n2 << " é R$" << resultado;
}
