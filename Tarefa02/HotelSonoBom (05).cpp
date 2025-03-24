#include <iostream>
#include <locale>
using namespace std;

main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	int Reserva, Diarias, Massagem, Hospede, Quarto;
	float Frigobar, Bar, ValorConta, Desconto, Garcom, ValorDiaria, ValorQuarto, TaxaHospe, ValorMassa, ValorFrig, ValorBar, ToltServ, Taxa;
	string Nome, Sobrenome, QuartoI, HospedeQ;
	
	cout << "Informe o n�mero da reserva: ";
	cin >> Reserva;
	
	cout << "Informe o seu primeiro nome do respons�vel: ";
	cin >> Nome;
		
	cout << "Informe o seu sobrenome do respons�vel: ";
    cin >> Sobrenome;
    
    cout << "Informe a quantidade de diarias que ira realizar: ";
    cin >> Diarias;
    
    cout << "Informe o valor consumido do Frigobar: ";
    cin >> Frigobar;
    
    cout << "Informe a quantidade de servi�os de massagem utilizados: ";
    cin >> Massagem;
    
    cout << "Informe o valor de consumo do bar: ";
    cin >> Bar;
    
    cout << "\nMARQUE APENAS O N�MERO NAS PROXIMAS DUAS QUEST�ES" << endl;
    system("pause");
    
    cout << "\nInforme a quantidade de h�spedes: \n1-Casal (at� duas pessoas) \n2-Fam�lia Pequena (3 ou 4 pessoas) \n3-Fam�lia Grande (acima de 5 pessoas)" << endl;
    cin >> Hospede;
    
    cout << "\nInforme tipo de quarto escolhido: \n1-Standard \n2-Luxo \n3-V.I.P"  << endl;
    cin >> Quarto;
    
    //Tipos de quarto
    if (Quarto == 1)
    {
    	ValorQuarto = 50.00;
    	QuartoI = "Standard";
	}
	else if (Quarto == 2)
	{
		ValorQuarto = 80.00;
		QuartoI = "Luxo";
	}
	else if (Quarto == 3)
	{
		ValorQuarto = 150,00;
		QuartoI = "V.I.P";
	}
	
	//Hospedes
	if (Hospede == 1)
	{
		TaxaHospe = 0;	
		HospedeQ = "Casal (at� duas pessoas)";
	}
	else if (Hospede == 2)
	{
		TaxaHospe = 20.00;
		HospedeQ = "Fam�lia Pequena (3 ou 4 pessoas)";
	}
	else if (Hospede == 3){
		TaxaHospe = 40.00;
		HospedeQ = "Fam�lia Grande (acima de 5 pessoas)";
	}
	
	//Massagem
	
	if (Massagem <= 3)
	{
		ValorMassa = Massagem * 80.00;
	}
	else if (Massagem > 3)
	{
		ValorMassa = Massagem * 65.00;
	}
	
	//Frigobar
	ValorFrig = Frigobar + 12.00;
	
	//Bar
	Garcom = Bar * 0.10;
	ValorBar = Bar + Garcom;
	
	//Soma final antes das taxas
	
	//Diaria
	ValorDiaria = (ValorQuarto * Diarias) + TaxaHospe;
	
	//Extras do oficio
	ToltServ = ValorMassa + ValorBar + ValorFrig;
	
	
	//Taxa
	if (Diarias <= 5)
	{
		Desconto =  0.05;
		
	}
	else if (Diarias >= 6 && Diarias <= 10)
	{
		Desconto =  0.03;
	}
	else 
	{
		Desconto =  0.01;
	}
	
	//TOTAL
	ValorConta = ValorDiaria + ToltServ;
	Taxa = ValorConta * Desconto;
	ValorConta += Taxa;
	
	//Saida
	cout << "\n==================================================================\n";
    cout << "N�mero da reserva: " << Reserva << endl;
    cout << "Respons�vel pela reserva: " << Nome << " " << Sobrenome << endl;
    cout << "N�mero de di�rias: " << Diarias << endl;
    cout << "Tipo de quarto: " << QuartoI << endl;
    cout << "Quantidade de hospedes: " << HospedeQ << endl;
    cout << "\n-------------------------------------\n";
    cout << "Valor das di�rias: R$" << ValorDiaria << endl;
    cout << "Valor total do servi�o de massagem: R$" << ValorMassa << endl;
    cout << "Valor total do frigobar: R$" << ValorFrig << endl;
    cout << "Valor total do bar: R$" << ValorBar << endl;
    cout << "Taxa de comiss�o ao gar�om (10%): R$" << Garcom << endl;
    cout << "Total em servi�os do Hotel Bom Sono: R$" << ToltServ << endl;
    cout << "ISS: R$" << Taxa << endl;
    cout << "Conta final: R$" << ValorConta << endl;
    cout << "\n==================================================================";
}
