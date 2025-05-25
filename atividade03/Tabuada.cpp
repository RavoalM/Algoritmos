#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    cout << "=== TABUADA DO 1 AO 10 ===\n\n";

    for (int i = 1; i <= 10; i++) {
        cout << "Tabuada do " << i << ":\n";
        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << i * j << "\n";
        }
        cout << "----------------------\n";
    }

}

