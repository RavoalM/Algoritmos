#include <iostream>
using namespace std;

main() {
    int numero, tipo;
    float kwh, custo;
    float totalResid = 0, totalCom = 0, totalInd = 0;

    while (true) {
        cout << "Número do consumidor (0 para encerrar): ";
        cin >> numero;
        if (numero == 0) break;

        cout << "kWh consumidos: ";
        cin >> kwh;

        cout << "Tipo (1-Residencial, 2-Comercial, 3-Industrial): ";
        cin >> tipo;

        if (tipo == 1) {
            custo = kwh * 0.3;
            totalResid += kwh;
        } else if (tipo == 2) {
            custo = kwh * 0.5;
            totalCom += kwh;
        } else if (tipo == 3) {
            custo = kwh * 0.7;
            totalInd += kwh;
        } else {
            cout << "Tipo inválido!\n";
            continue;
        }

        cout << "Custo do consumo: R$ " << custo << "\n\n";
    }

    cout << "\n=== RESUMO FINAL ===\n";
    cout << "Total consumo Residencial: " << totalResid << " kWh\n";
    cout << "Total consumo Comercial: " << totalCom << " kWh\n";
    cout << "Total consumo Industrial: " << totalInd << " kWh\n";

    if (totalResid > totalCom && totalResid > totalInd)
        cout << "Categoria que mais consome: Residencial\n";
    else if (totalCom > totalResid && totalCom > totalInd)
        cout << "Categoria que mais consome: Comercial\n";
    else if (totalInd > totalResid && totalInd > totalCom)
        cout << "Categoria que mais consome: Industrial\n";
    else
        cout << "Empate no consumo.\n";

}

