#include <iostream>
using namespace std;

main() {
    string nome;
    float nota, soma = 0;
    int contador = 0;

    while (contador < 15) {
        cout << "Digite o nome do aluno (ou 'fim' para encerrar): ";
        getline(cin, nome);

        if (nome == "fim") break;

        cout << "Digite a nota: ";
        cin >> nota;
        cin.ignore();

        soma += nota;
        contador++;
    }

    if (contador > 0) {
        float media = soma / contador;
        cout << "\nMédia da turma: " << media << endl;
    } else {
        cout << "Nenhuma nota foi informada.\n";
    }

//Gattino sei que não tá lá tão bonito mas é que eu fiz a lista auxiliar 4 achando que era essa então me deu uma dessanimada
}

