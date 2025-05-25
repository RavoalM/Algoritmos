#include <iostream>
using namespace std;

main() {
    setlocale(LC_ALL, "Portuguese");

    string nome, sexo;
    int idade, turno, semestre;
    
    int totalManha = 0, totalNoite = 0;
    int calourosAte18 = 0, calouros19a25 = 0, calourosMais25 = 0;
    int mulheresManha = 0;
    int totalHomens = 0, totalMulheres = 0;
    int contador = 0;

    cout << "=== SISTEMA DE ALUNOS - UNIPLAC ===\n\n";

    while (contador < 200) {
        cout << "[1] Manhã\n[2] Noite\n[0] Encerrar\n";
        cout << "Digite o turno: ";
        cin >> turno;

        if (turno == 0) {
            break; 
        }

        cin.ignore();  

        cout << "Nome: ";
        getline(cin, nome);

        cout << "Sexo (M ou F): ";
        getline(cin, sexo);

        cout << "Idade: ";
        cin >> idade;

        cout << "Semestre atual: ";
        cin >> semestre;

        cin.ignore(); 

        if (turno == 1) totalManha++;
        else if (turno == 2) totalNoite++;

        if (semestre == 1 || semestre == 2) {
            if (idade <= 18) calourosAte18++;
            else if (idade <= 25) calouros19a25++;
            else calourosMais25++;
        }

        if (sexo == "F" || sexo == "f") {
            if (turno == 1) mulheresManha++;
            totalMulheres++;
        } else if (sexo == "M" || sexo == "m") {
            totalHomens++;
        }

        contador++;

        cout << "\n--- Próximo aluno (" << contador << "/200) ---\n\n";
    }

    string sexoMaisAlunos;
    if (totalHomens > totalMulheres) sexoMaisAlunos = "Masculino";
    else if (totalMulheres > totalHomens) sexoMaisAlunos = "Feminino";
    else sexoMaisAlunos = "Empate";

    cout << "\n=== RELATÁRIO FINAL ===\n";
    cout << "Total de alunos no turno da manhã: " << totalManha << "\n";
    cout << "Total de alunos no turno da noite: " << totalNoite << "\n";

    cout << "\nFaixa etária dos calouros (1º e 2º semestre):\n";
    cout << "Até 18 anos: " << calourosAte18 << "\n";
    cout << "De 19 a 25 anos: " << calouros19a25 << "\n";
    cout << "Acima de 25 anos: " << calourosMais25 << "\n";

    cout << "\nNúmero de mulheres no turno da manhã: " << mulheresManha << "\n";

    cout << "\nSexo com mais alunos no curso: " << sexoMaisAlunos << "\n";

}

