#include <iostream>
using namespace std;
main()
{
	setlocale (LC_ALL, "Portuguese");
	//Calculo para saber o total necessario de barbante 
	
	//variaveis
	int largura, altura, comprimento, total_barbante, b1, b2, b3;
	
	cout << "Informe a largura: ";
	cin >> largura;
	cout << "Informe a Altura: ";
	cin >> altura;
	cout << "Informe o comprimento: ";
	cin >> comprimento;
	
	//processo
	
	b1 = (2*comprimento) + (2*altura) + 10;
	b2 = (2*comprimento) + (2*largura) + 10;
	b3 = (2*largura) + (2*altura) + 10;
	
	total_barbante = b1 + b2 + b3;
	//metodo que substitui as 4 linhas acima: total_barbante = (4*altura) + (4*comprimento) + (4*largura) + 30;
	
	//saida
	
	cout << "\n=======================\n";
	cout << "\nTotal Barbante necessário: " << total_barbante;
	cout << "\n=======================\n";
}
