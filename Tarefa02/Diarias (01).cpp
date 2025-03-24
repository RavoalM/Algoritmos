#include <iostream>
#include <locale>
using namespace std;

main() 
{
    setlocale(LC_ALL, "Portuguese");
    
    //entrada 
    float Taxa, ValorTotal; 
    int Diaria;
    string Nome, Sobrenome;
	
	//coleta de dados
	cout << "Por favor informe o seu nome: ";
	cin >> Nome;
	
	cout << "Por favor, informe o seu sobrenome: ";
    cin >> Sobrenome;
	
	cout << "\nPor favor informe o número de diárias: ";
	cin >> Diaria;
	
		//processo
		if (Diaria > 5)
		{
			Taxa = 5.50;
		}
	
		else if (Diaria == 5)
		{
			Taxa = 7.00;
		}
		else 
		{
			Taxa = 9.00;
		}
	
		ValorTotal = Diaria * 60.00;
		ValorTotal = ValorTotal + Taxa;
	
	//saida
	cout << "\n==================================================================";
    cout << "\nA conta no nome de " << Nome  << " " << Sobrenome << " " << "é de R$" << ValorTotal;
    cout << "\n==================================================================";
}
