#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    //Quilometragem Automov�l

    //entrada
  	string marca;
  	float Qinicial, Qfinal, Qtotal, litros, consumo;
  	
  	//coleta de dados
  	cout << "Por favor informe qual � a marca do seu autom�vel: ";
  	cin >> marca; 
  	cout << "Por favor informe qual � a quilometragem inicial: ";
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
    cout << "Esses s�o os dados de sua viagem:\nMarca do autom�vel: " << marca  << "\nQuilometragem inicial: " << Qinicial  << "Km"
    << "\nQuilometragem final: " << Qfinal << "Km" << "\nQuilometragem percorrida: " << Qtotal  << "Km" << "\nLitros consumidos: " 
	<< litros <<"L" << "\nConsumo: " << consumo <<"Km/litros";
    cout << "\n==================================================================\n";
}
