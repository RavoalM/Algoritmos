#include <iostream>
#include <string>
using namespace std;

main() {
    string nome, sexo;
    float salario;
    float somaM = 0, somaF = 0;
    int contM = 0, contF = 0;

    while (true) {
        cout << "Sexo (M/F/X para encerrar): ";
        getline(cin, sexo);

        if (sexo == "X" || sexo == "x") break;

        cout << "Nome: ";
        getline(cin, nome);

        cout << "Sal�rio: ";
        cin >> salario;
        cin.ignore();

        if (sexo == "M" || sexo == "m") {
            somaM += salario;
            contM++;
        } else if (sexo == "F" || sexo == "f") {
            somaF += salario;
            contF++;
        }
    }

    float mediaM = contM ? somaM / contM : 0;
    float mediaF = contF ? somaF / contF : 0;

    cout << "\nMédia salarial Masculina: R$ " << mediaM << "\n";
    cout << "Média salarial Feminina: R$ " << mediaF << "\n";

    if (mediaM > mediaF) cout << "Sexo com maior média salarial: Masculino\n";
    else if (mediaF > mediaM) cout << "Sexo com maior média salarial: Feminino\n";
    else cout << "Ambos os sexos possuem a mesma média salarial.\n";

}

