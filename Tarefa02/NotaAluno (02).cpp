#include <iostream>
#include <locale>
using namespace std;

main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	int Nota;
	string Nome, Sobrenome, Conceito;
	 
	
	cout << "Por favor informe o seu primeiro nome: ";
	cin >> Nome;
		
	cout << "Por favor, informe o seu sobrenome: ";
    cin >> Sobrenome;
    
    cout << "Por favor informe a sua nota: ";
    cin >> Nota;
    
    	if (Nota <= 39){
    		Conceito = "E";
		}
		else if (Nota <= 59)
		{
			Conceito = "D";
		}
		else if (Nota <= 75)
		{
			Conceito = "C";
		}
		else if (Nota <= 89)
		{
			Conceito = "B";
		}
		else if (Nota <= 100)
		{
			Conceito = "A";
		}
		else {
			cout << "\n!!O valor da nota inserido é invalido, por favor reincie o sistema e tente novamente com um valor valido!!";
		}
	
	//saida
	cout << "\n==================================================================";
    cout << "\nA nota e conceito de " << Nome  << " " << Sobrenome << " " << "são:" << "\nNota: " << Nota << "\nConceito: " << Conceito;
    cout << "\n==================================================================";
}
