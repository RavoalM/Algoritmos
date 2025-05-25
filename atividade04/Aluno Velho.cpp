#include <iostream>
using namespace std;

main() {
    setlocale(LC_ALL, "Portuguese");

    string nome;
    int idade;
    int idadeMaisVelha = -1;  
    
    cout << "=== IDADE DO ALUNO MAIS VELHO ===\n\n";

    cout << "Digite o nome do aluno (ou 'fim' para encerrar): ";
    getline(cin, nome);

    while (nome != "fim") {
        cout << "Digite a idade de " << nome << ": ";
        cin >> idade;
        cin.ignore();  //Achei esse meio de evitar um bug que tava rolando de meio que juntar as linhas

        if (idade > idadeMaisVelha) {
            idadeMaisVelha = idade;
        }

        cout << "\nDigite o nome do aluno (ou 'fim' para encerrar): ";
        getline(cin, nome);
    }
	
    cout << "\n===== RESULTADO FINAL =====\n";
    cout << "\nA idade do aluno mais velho é: " << idadeMaisVelha << "\n";
    
}

