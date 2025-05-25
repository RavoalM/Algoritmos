#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    string nome, nomeMaisAlto, nomeMaisNovo;
    int idade, total35Mais = 0, idadeMaisNova = 999;
    float altura, maiorAltura = 0.0, somaIdadeAltos = 0.0;
    int contAltos = 0;

    cout << "=== COLETA DE DADOS (20 PESSOAS) ===\n\n";

    for (int i = 1; i <= 3; i++) {
        cout << "Pessoa " << i << ":\n";

        cout << "Nome: ";
        cin >> nome;

        cout << "Idade: ";
        cin >> idade;

        cout << "Altura (em metros): ";
        cin >> altura;

        if (altura > 1.80) {
            somaIdadeAltos += idade;
            contAltos++;
        }

        if (idade > 35) {
            total35Mais++;
        }

       if (altura > maiorAltura) {
            maiorAltura = altura;
            nomeMaisAlto = nome;
        }

        if (idade < idadeMaisNova) {
            idadeMaisNova = idade;
            nomeMaisNovo = nome;
		}
        cout << "---------------------------\n";
    }

    cout << "\n===== RESULTADO FINAL =====\n";

    if (contAltos > 0) {
        float mediaAltos = somaIdadeAltos / contAltos;
        cout << "Média de idade das pessoas com mais de 1,80m: " << mediaAltos << "\n";
    } else {
        cout << "Nenhuma pessoa com mais de 1,80m de altura.\n";
    }

    cout << "Total de pessoas com mais de 35 anos: " << total35Mais << "\n";

    cout << "Pessoa mais alta: " << nomeMaisAlto << " (" << maiorAltura << " m)\n";

    cout << "Pessoa mais nova: " << nomeMaisNovo << " (" << idadeMaisNova << " anos)\n";

}

