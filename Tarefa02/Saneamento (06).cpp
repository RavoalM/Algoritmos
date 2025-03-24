#include <iostream>
#include <locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL , "Portuguese");

    //
    string cat;
    int Categoria;
    float ValorPIS, ValorCOF, ValorCat, ValorTotal, ValorTotalm3,
    m3consumidos, m3taxa1, valor1;

    //entrada

    cout << "Informe o número de m³ consumidos (utilize '.' como separador decimal): ";
    cin >> m3consumidos; 
    cout << "Abaixo selecione a Categoria corresponde ao seu conusmo: \n1.Residencial \n2.Comercial \n3.Industrial\n"; 
    cin >> Categoria;

	//processo
    if (m3consumidos<=10) 
    {
        ValorTotalm3 = m3consumidos *2.99;

    }else if (m3consumidos>10 && m3consumidos<=25) 
    {
       m3taxa1 = m3consumidos - 10;
       valor1 = m3taxa1 * 5.48;
       ValorTotalm3 = 29.9 + valor1;

    }else if (m3consumidos>25 && m3consumidos<=50) 
    {
        m3taxa1 = m3consumidos - 25;
        valor1 = m3taxa1 * 7,69;
        ValorTotalm3 = 29.9 + 82.2 + valor1;

    }else{ 
        
        m3taxa1 = m3consumidos - 50;
        valor1 = m3taxa1 * 9.22;
        ValorTotalm3 = 29.9 + 82.2 + 192.25 + valor1;

    }

    if (Categoria == 1) 
    {
        cat = "Residencial";
        ValorCat = 5.00;
    }else if(Categoria == 2)
    {
        cat = "Comercial";
        ValorCat = 10.00;
    }else if(Categoria == 3)
    {
        cat = "Industrial";
        ValorCat=15.00;
    }
    ValorTotal = ValorTotalm3 + ValorCat;

    
    ValorPIS = (ValorTotal*0.0065);
    ValorCOF = (ValorTotal*0.03);

    ValorTotal = ValorTotalm3 + ValorCat + ValorPIS + ValorCOF;

	//saida
    cout<<"\n==========Companhia Catarinense de Águas e Saneamento==========";
    cout<<"Valor a ser pago de saneamento básico: R$" <<ValorTotalm3;
    cout<<"\nValor cobrado pela categoria " <<cat <<": R$" <<ValorCat;
    cout<<"\nValor do PIS: R$" <<ValorPIS;
    cout<<"\nValor do COFINS: R$" <<ValorCOF;
    cout<<"\nValor total a ser pago: R$" <<ValorTotal;
	cout << "\n=============================================================";
}
