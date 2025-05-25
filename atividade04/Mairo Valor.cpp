#include <iostream>
using namespace std;

main() {
    setlocale(LC_ALL, "Portuguese");

    cout << "=== MAIOR VALOR ENTRE 10 NÚMEROS ===\n";

    int valor, maior, contador = 1;

    cout << "Digite o 1º valor: ";
    cin >> valor;
    maior = valor;

   contador++;

    while (contador <= 10) {
        cout << "Digite o " << contador << "º valor: ";
        cin >> valor;

        if (valor > maior) {
            maior = valor;
        }

        contador++;
    }

    cout << "\n===== RESULTADO FINAL =====\n";
    cout << "Maior valor informado: " << maior;

}

