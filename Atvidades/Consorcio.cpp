#include <iostream>
using namespace std;
main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//variaveis
	int total_parcelas, quantidade_paga;
	float valor_parcela, total_consorcio, total_pago, saldo_devedor;
	
	//entrada
	cout << "Informe o numero total de parcelas: ";
	cin >> total_parcelas;
	cout << "Informe o numero de parcelas pagas: ";
	cin >> quantidade_paga;
	cout << "Valor da prestações: ";
	cin >> valor_parcela;
	
	//processo
	total_consorcio = total_parcelas * valor_parcela;
	total_pago = quantidade_paga * valor_parcela;
	saldo_devedor = total_consorcio - total_pago;
	
	//saida	
	cout << "\n===========================\n";
	cout << "\nTotal de prestações: " << total_parcelas;
	cout << "\nQuanidade de prestações pagas: " << quantidade_paga;
	cout << "\nValor das parcelas: R$" << valor_parcela;
	cout << "\n\nTotal consorcio: R$" << total_consorcio;
	cout << "\nTotal pago: R$" << total_pago;
	cout << "\nSaldo devedor: R$" << saldo_devedor; 
	cout << "\n===========================\n";
	
	 
	
	
}
