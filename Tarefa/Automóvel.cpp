#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    //Quilometragem Automovél

    //entrada
  	string marca;
  	float Qinicial, Qfinal, Qtotal, litros, consumo;
  	
  	//coleta de dados
  	cout << "Por favor informe qual é a marca do seu automóvel: ";
  	cin >> marca; 
  	cout << "Por favor informe qual é a quilometragem inicial: ";
  	cin >> Qinicial;
  	cout << "Por favor informe qual a quilometragem final: ";
  	cin >> Qfinal;
  	cout << "Por favor informe quantos litros de combustivel foram consumidos: ";
  	cin >> litros;
  	
  	//processo
  	Qtotal = Qfinal - Qinicial;
  	consumo = Qtotal / litros;
  	
  	//saida
    cout << "\n==================================================================\n";
    cout << "Esses são os dados de sua viagem:\nMarca do automóvel: " << marca  << "\nQuilometragem inicial: " << Qinicial  << "Km"
    << "\nQuilometragem final: " << Qfinal << "Km" << "\nQuilometragem percorrida: " << Qtotal  << "Km" << "\nLitros consumidos: " 
	<< litros <<"L" << "\nConsumo: " << consumo <<"Km/litros";
    cout << "\n==================================================================\n";
}
