#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "Portuguese");
	//calculo de média de três notas
	
	//entrada
	float n1, n2, n3, media;
	
	//coleta de dados
	cout << "Informe a primeira nota: ";
	cin >> n1;
	cout << "Informe a segunda nota: ";
	cin >> n2;
	cout << "Informe a terceira nota: ";
	cin >> n3;
	cout << endl << endl;
	
	//processo
	n1 = n1 + n2 + n3;
	media = n1 / 3;
	
	//saida
	if (media >= 7.0){
		cout << "sua nota é " << media << " e ela esta dentro da média";
	}
	else 
	{
		cout << "sua nota é" << media << " e ela esta fora da média";
	}

}
