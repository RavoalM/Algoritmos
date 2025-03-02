#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    //quantidade vendida e total arrecadado

    //entrada
    int picole, venda;
    float valor;

    //coleta de dados
    cout << "Escolhe entre um dos três picolé:\n1. Morango\n2. Napolitano\n3. A�ai\n(Por favor marque s� o n�mero do picol�)\n";
    cin >> picole;

    //processo e saida Morango
    if (picole == 1) {
    	cout << "\n==================================================================";
        cout << "\nPor favor informe quantos picol�s de Morango foram vendidos:";
        cin >> venda;  
        valor = 0.50 * venda;
        cout << "\nForam vendidos " << venda << " picol�s de Morango, totalizando R$" << valor << endl;
    	cout << "==============================================================";
    }
    
     //processo e saida Napolitano
    else if (picole == 2) {
        cout << "\n==================================================================";
        cout << "\nPor favor informe quantos picol�s de Napolitano foram vendidos:";
        cin >> venda;  
        valor = 0.60 * venda;
        cout << "\nForam vendidos " << venda << " picol�s de Napolitano, totalizando R$" << valor << endl;
    	cout << "==================================================================";
    }
	
	 //processo e saida A�ai
	else if (picole == 3){
		cout << "\n==================================================================";
        cout << "\nPor favor informe quantos picol�s de A�ai foram vendidos:";
        cin >> venda;  
        valor = 0.50 * venda;
        cout << "\nForam vendidos " << venda << " picol�s de A�ai, totalizando R$" << valor << endl;
    	cout << "==================================================================";
	}
	
	 //em caso de resposta fora das 3
	else {
		cout << "\n=========================================================================================";
		cout << "\n!!!O valor inserido não possui no sistema, por favor reinicie e insira um valor valido!!!" << endl;
		cout << "=========================================================================================";
	}
	
	
}
