#include <iostream>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	//dias vividos
	
    int dia, mes, ano, idade; 
    int diaAtu, mesAtu, anoAtu;     
    int diasvividos;
 
 	//processo para pegar data do computador
 	time_t now = time(0);
    tm* localTime = localtime(&now);   
    
    //coleta do dia mes e ano
    diaAtu = localTime->tm_mday;
    mesAtu = localTime->tm_mon + 1;
    anoAtu = localTime->tm_year + 1900;
    
    //coleta de dados
    cout << "\n======= Bem vindo =======\n";
    cout << "Por favor informe sua data de nascimento:\n";
    cout << "Dia: ";
    cin >> dia;
    cout << "Mês: ";
    cin >> mes;
    cout << "Ano: ";
    cin >> ano;
    
    //processo
    idade = anoAtu - ano;
    
    if (mes > mesAtu || (mes == mesAtu && dia > diaAtu))
    {
    	idade--;
	}
    
    diasvividos = idade * 360;
    
    cout << "\n======= Dias vividos =======\n";
    cout << "\nVocê possui " << idade<< " anos";
    cout << "\nAproximadamente você viveu " << diasvividos << " dias";
}
