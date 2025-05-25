#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int voto;
    int cand1 = 0, cand2 = 0, cand3 = 0;
    int nulo = 0, branco = 0;

    cout << "=== SISTEMA DE ELEIÇÃO (20 ELEITORES) ===\n";
    cout << "Códigos dos candidatos:\n";
    cout << "1 = Gattino\n2 = Imperador Palpatine\n3 = Senhor Verissímo\n";
    cout << "5 = Voto Nulo\n6 = Voto em Branco\n\n";

    for (int i = 1; i <= 20; i++) {
        cout << "Eleitor " << i << ", digite seu voto: ";
        cin >> voto;

        switch (voto) {
            case 1: cand1++; break;
            case 2: cand2++; break;
            case 3: cand3++; break;
            case 5: nulo++; break;
            case 6: branco++; break;
            default:
                cout << "Voto inválido! Não será contabilizado.\n";
                i--; 
                break;
        }
    }

    int totalVotos = cand1 + cand2 + cand3 + nulo + branco;

    float pc1 = (cand1 * 100.0) / totalVotos;
    float pc2 = (cand2 * 100.0) / totalVotos;
    float pc3 = (cand3 * 100.0) / totalVotos;
    float pcNulo = (nulo * 100.0) / totalVotos;
    float pcBranco = (branco * 100.0) / totalVotos;

    cout << "\n=== RESULTADO DA ELEIÇÃO ===\n";
    cout << "Gattino: " << cand1 << " votos (" << pc1 << "%)\n";
    cout << "Imperador Palpatine: " << cand2 << " votos (" << pc2 << "%)\n";
    cout << "Senhor Verissímo: " << cand3 << " votos (" << pc3 << "%)\n";
    cout << "Votos Nulos : " << nulo  << " votos (" << pcNulo << "%)\n";
    cout << "Votos Branco: " << branco << " votos (" << pcBranco << "%)\n";

    cout << "\nVENCEDOR: ";
    if (cand1 > cand2 && cand1 > cand3) {
        cout << "Gattino\n";
    } else if (cand2 > cand1 && cand2 > cand3) {
        cout << "Imperador Palpatine\n";
    } else if (cand3 > cand1 && cand3 > cand2) {
        cout << "Senhor Verissímo\n";
    } else {
        cout << "Empate entre candidatos.\n";
    }

    return 0;
}

