#include <iostream>

using namespace std;

main() {
    string nome, nomeMaisVelho;
    int idade, maiorIdade = 0;

    while (true) {
        cout << "Digite a idade do aluno (0 para encerrar): ";
        cin >> idade;
        cin.ignore();

        if (idade == 0) break;

        cout << "Digite o nome do aluno: ";
        getline(cin, nome);

        if (idade > maiorIdade) {
            maiorIdade = idade;
            nomeMaisVelho = nome;
        }
    }

    if (maiorIdade > 0)
        cout << "Aluno mais velho: " << nomeMaisVelho << " (" << maiorIdade << " anos)\n";
    else
        cout << "Nenhum aluno foi informado.\n";

}

