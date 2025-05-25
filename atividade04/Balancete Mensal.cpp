#include <iostream>
using namespace std;

main() {
    setlocale(LC_ALL, "Portuguese");

    float valorNF;
    int abaixo1000 = 0;
    int entre1000e5000 = 0;
    int acima5000 = 0;
    int totalNotas = 0;
    float totalVendas = 0.0;

    cout << "=== BALANCETE MENSAL ===\n\n";

    cout << "Digite o valor da Nota Fiscal (0 para encerrar): ";
    cin >> valorNF;

    while (valorNF != 0) {
        if (valorNF < 1000.0) {
            abaixo1000++;
        } else if (valorNF <= 5000.0) {
            entre1000e5000++;
        } else {
            acima5000++;
        }

        totalNotas++;
        totalVendas += valorNF;

        cout << "\nDigite o valor da próxima Nota Fiscal (0 para encerrar): ";
        cin >> valorNF;
    }

    cout << "\n=== IMPRESSÃO DO BALANCETE ===\n";
    cout << "Notas abaixo de R$ 1.000,00: " << abaixo1000 << "\n";
    cout << "Notas entre R$ 1.000,00 e R$ 5.000,00: " << entre1000e5000 << "\n";
    cout << "Notas acima de R$ 5.000,00: " << acima5000 << "\n";
    cout << "Total de Notas Fiscais: " << totalNotas << "\n";
    cout << "Valor total de vendas: R$ " << totalVendas << "\n";

}

