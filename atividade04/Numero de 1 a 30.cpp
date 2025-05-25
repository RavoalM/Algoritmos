#include <iostream>
using namespace std;

main() {
    setlocale(LC_ALL, "Portuguese");

    cout << "=== NÚMEROS DE 1 A 30 ===\n\n";

    int i = 1;

     while (i <= 30) {
        //perguntei pro chat como deixar mais organzado e ele mostro essa quest�o da tabula��o
        cout << i << "\t";

        if (i % 5 == 0) {
            cout << "\n"; 
        }

        i++;
    }

}

