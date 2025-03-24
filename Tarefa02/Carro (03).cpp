#include <iostream>
#include <locale>
#include <cctype>
using namespace std;

main() 
{
	setlocale(LC_ALL, "Portuguese");
	char Vidro, ArCon, Trava, Pint, Direcao, Vista;
	float ValorTotal, ValorInicial, Desconto;
	string Aderecos;
	
	cout << "Insira o valor incial do carro: ";
	cin >> ValorInicial;
	cout << "Por favor, responda as seguintes perguntas para conclusão do preço do seu carro: \n";
    cout << "(TODAS AS PERGUNTAS DEVEM SER RESPONDIDAS COM S OU N)\n";
    system("pause");
   	cout << "\n==================================================================";

	cout << "\nO carro possui 'Vidro Elétrico' ? (S/N) ";
	cin >> Vidro;
    Vidro = toupper(Vidro); 
    
	cout << "\nO carro possui 'Ar Condicionado' ? (S/N) ";
	cin >> ArCon;
    ArCon = toupper(ArCon);  
    
	cout << "\nO carro possui 'Trava Central e Alarme' ? (S/N) ";
	cin >> Trava;
    Trava = toupper(Trava);
	
	cout << "\nO carro possui 'Pintura Metálica' ? (S/N) ";
	cin >> Pint;
    Pint = toupper(Pint);
    
	cout << "\nO carro possui 'Direção Hidráulica' ? (S/N) ";
	cin >> Direcao;
    Direcao = toupper(Direcao); 
    cout << "==================================================================";
    
    cout << "\nO valor final do veículo sofre um desconto de 5% no pagamento a vista, gostaria de pagar a vista? (S/N) ";
    cin >> Vista;
    Vista = toupper(Vista);
	
	if (Vidro == 'S')
	{
		ValorTotal += 500.00;
		Aderecos += "Vidro elétrico: R$500,00\n";
	}
	if (ArCon == 'S')
	{
		ValorTotal += 2000.00;
		Aderecos += "Ar Condicionado: R$2000,00\n";
	}
	if (Trava == 'S')
	{
		ValorTotal += 500.00;
		Aderecos += "Trava Central e Alarme: R$500,00\n";
	}
	if (Pint == 'S')
	{
		ValorTotal +=  1000.00;
		Aderecos += "Pintura Metálcia: R$1000,00\n";
	}
	if (Direcao == 'S')
	{
		ValorTotal += 2500.00;
		Aderecos += "Direção Hidráulica: R$2500,00\n";
	}
	
	ValorTotal += ValorInicial;
	
	if (Vista == 'S')
	{
		Desconto = ValorTotal * 0.05;
		ValorTotal -= Desconto;
	}
	cout <<"\n======================================";
	cout << "\nValor total do carro: R$ " << ValorTotal;
	cout << "\nDesconto de: R$" << Desconto;
	cout << "\n----------------------";
    cout << "\Opcionais escolhidos:\n" << Aderecos;
	cout <<"======================================";
}
