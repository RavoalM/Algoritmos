#include <iostream>
using namespace std;
main()
{
	
	setlocale (LC_ALL, "Portuguese");
	//apresentação de itens com e sem desconto
	
	//entrada
	string nome, nome2, nome3;
	float preco_sem_desc, preco_com_desc, valor_desc, percentual;
	float preco_sem_desc2, preco_com_desc2, valor_desc2, percentual2;
	float preco_sem_desc3, preco_com_desc3, valor_desc3, percentual3;
	
	//coleta dos dados
	cout << "informe o nome do primeiro produto: ";
	cin >> nome;
	cout << "Informe o preço bruto do produto: ";
	cin >> preco_sem_desc;
	cout << "informe a % de desconto: ";
	cin >> percentual; 
	
	//coleta dos dados p2
	cout << "\ninforme o nome do segundo produto: ";
	cin >> nome2;
	cout << "Informe o preço bruto do produto: ";
	cin >> preco_sem_desc2;
	cout << "informe a % de desconto: ";
	cin >> percentual2; 
	
	//coleta dos dados p3
	cout << "\ninforme o nome do terceiro produto: ";
	cin >> nome3;
	cout << "Informe o preço bruto do produto: ";
	cin >> preco_sem_desc3;
	cout << "informe a % de desconto: ";
	cin >> percentual3; 
	
	//processo/saida p1
	valor_desc = preco_sem_desc * percentual / 100;
	
	cout << "\n===========================\n";
	cout << "Produto...........: " << nome<<"\n";
	cout << "Valor bruto.......: R$" << preco_sem_desc <<"\n";
	cout << "Desconto..........: R$" << valor_desc <<"\n";
	cout << "Valor com desconto: R$" << preco_sem_desc - valor_desc; 
	cout << "\n===========================\n";
	
	//processo/saida p2
	valor_desc2 = preco_sem_desc2 * percentual2 / 100;
	
	cout << "\n===========================\n";
	cout << "Produto...........: " << nome2 <<"\n";
	cout << "Valor bruto.......: R$" << preco_sem_desc2 <<"\n";
	cout << "Desconto..........: R$" << valor_desc2 <<"\n";
	cout << "Valor com desconto: R$" << preco_sem_desc2 - valor_desc2; 
	cout << "\n===========================\n";
	
	//processo/saida p3
	valor_desc3 = preco_sem_desc3 * percentual3 / 100;
	
	cout << "\n===========================\n";
	cout << "Produto...........: " << nome3 <<"\n";
	cout << "Valor bruto.......: R$" << preco_sem_desc3 <<"\n";
	cout << "Desconto..........: R$" << valor_desc3 <<"\n";
	cout << "Valor com desconto: R$" << preco_sem_desc3 - valor_desc3; 
	cout << "\n===========================\n";
	
}
