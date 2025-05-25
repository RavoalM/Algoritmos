#include <iostream>
using namespace std;

main() {
    setlocale(LC_ALL, "Portuguese");

    float nota = 0, totalNotas = 0, media = 0;

    cout << "=== COLETA DE NOTAS ===\n\n";

    for (int i = 1; i <= 20; i++) {
        cout << "Aluno " << i << " - Informe sua nota: ";
        cin >> nota;

        totalNotas += nota;
    }

    media = totalNotas / 20;

    cout << "\n===== RESULTADO FINAL =====\n";
    cout << "Média da sala: " << media << endl;

}

