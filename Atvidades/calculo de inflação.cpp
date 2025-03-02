#include <iostream>
using namespace std;
main()
{
	setlocale (LC_ALL, "Portuguese");
	//Calculo de inflação
	
	//variaveis
	float preco1, preco2, variacao;
	
	//entrada
	cout << "Informe o preço no dia 17: ";
	cin >> preco1;
	cout <<"\nInforme o preço dia 18: "; 
	cin >> preco2;
	
	//processo
	variacao = (preco2-preco1) * 100/preco1;
	
	//saida
	cout << "\nA variação é: " << variacao;
	 
	
}

