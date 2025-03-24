#include <iostream>
#include <locale>
using namespace std;

main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	float SaldoAtual, Quantia;
	int Numero, Operacao;
	string Nome, Sobrenome;
	
	cout << "Por favor informe o seu primeiro nome: ";
	cin >> Nome;
		
	cout << "Por favor, informe o seu sobrenome: ";
    cin >> Sobrenome;
    
    cout << "Informe seu saldo a atual da conta:";
    cin >> SaldoAtual;
    
    cout  <<"\nESCOLHA APENAS O NÚMERO \n1.DEPOSITAR \n2.RETIRAR" << endl;
    cin >> Operacao;
    
    if (Operacao == 1)
    {
    	cout << "\nInforme quanto deseja depositar." << endl;
    	cin >> Quantia;
    	
    	SaldoAtual += Quantia;
    	
    	cout <<"\n" << Nome << " " << Sobrenome << " possui R$" << SaldoAtual <<" em sua conta." << endl;
	}
	else if (Operacao == 2 && SaldoAtual >= 0)
	{
		cout << "\nInforme quanto deseja retirar" << endl;
    	cin >> Quantia;
    	
    	if (Quantia > SaldoAtual) {
        cout << "\nSaldo insuficiente!" << endl;
    	}
    	
    	else {
        SaldoAtual -= Quantia;
        cout <<"\n" << Nome << " " << Sobrenome << " possui R$ " << SaldoAtual << " em sua conta." << endl;
    	}
	}
	else 
	{
		cout << "\n!!A operação inserida é invalida, por favor reincie o sistema e tente novamente com uma operação valida!!";
	}
	
	if (SaldoAtual <= 0)
	{
		cout << "\nConta Estourada.";
	}
	
	
}
