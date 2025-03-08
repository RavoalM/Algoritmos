#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    //calcular raio da esfera
    
    //entrada
    float raio, volume;
    
	//coleta de dados 
    cout << "Por favor informe o raio da esfera: ";
    cin >> raio;
  
    //processo 
    volume = 4 * 3.14 * pow(raio, 3) / 3;
    
    //saida
    cout << "O volume de uma esfera com um raio de " << raio << " é " << volume;
    
}
