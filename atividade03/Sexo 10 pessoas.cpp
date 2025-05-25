#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    string nome;
    int sexo;
    int contHomens = 0, contMulheres = 0;

    cout << "=== COLETA DE DADOS ===\n\n";

    for (int i = 1; i <= 10; i++) {
        cout << "Pessoa " << i << ":\n";

        cout << "Informe seu nome: ";
        cin >> nome;

        cout << "Informe seu sexo:\n";
        cout << "[1] Masculino\n[2] Feminino\n> ";
        cin >> sexo;

        switch (sexo) {
            case 1:
                cout << nome << "! Sexo registrado: Masculino\n";
                contHomens++;
                break;
            case 2:
                cout << nome << "! Sexo registrado: Feminino\n";
                contMulheres++;
                break;
            default:
                cout << "Opção inválida. Sexo não contabilizado.\n";
                break;
        }

        cout << "--------------------------\n";
    }

    cout << "\n===== RESULTADO FINAL =====\n";
    cout << "Total de homens: " << contHomens << endl;
    cout << "Total de mulheres: " << contMulheres << endl;

}

