#include <iostream>
using namespace std;

main() {
    setlocale(LC_ALL, "Portuguese");

    string nome;
    int idade;

    int totalMirim = 0;
    int totalJuvenil = 0;
    int totalAdulto = 0;

    cout << "=== ESCOLINHA DE FUTEBOL BOM DE BOLA ===\n\n";

    while (true) {
        cout << "Digite o nome do inscrito: ";
        getline(cin, nome);

        cout << "Digite a idade (0 para encerrar): ";
        cin >> idade;
        cin.ignore();  

        if (idade == 0) {
            break;  
        }

        if (idade >= 6 && idade <= 11) {
            totalMirim++;
        } else if (idade >= 12 && idade <= 17) {
            totalJuvenil++;
        } else if (idade >= 18) {
            totalAdulto++;
        } else {
            cout << "Idade fora das categorias (menores que 6 anos não entram).\n";
        }

        cout << "\n"; 
    }

    cout << "\n=== RESULTADO FINAL ===\n";
    cout << "Total Mirim   (6 a 11 anos): " << totalMirim << "\n";
    cout << "Total Juvenil (12 a 17 anos): " << totalJuvenil << "\n";
    cout << "Total Adulto  (18 anos ou mais): " << totalAdulto << "\n";

}

