#include <iostream>
using namespace std;

int main() {
    int voto, total = 0, cand1 = 0, cand2 = 0, cand3 = 0;

    while (true) {
        cout << "Digite seu voto (1, 2, 3) ou 0 para encerrar: ";
        cin >> voto;

        if (voto == 0) break;

        if (voto == 1) cand1++;
        else if (voto == 2) cand2++;
        else if (voto == 3) cand3++;

        total++;
    }

    if (total > 0) {
        cout << "\nResultado da Eleição:\n";
        cout << "Gattino: " << (cand1 * 100.0 / total) << "%\n";
        cout << "Imperador Palpatine: " << (cand2 * 100.0 / total) << "%\n";
        cout << "Senhor Verissímo: " << (cand3 * 100.0 / total) << "%\n";
    } else {
        cout << "Nenhum voto registrado.\n";
    }

}

