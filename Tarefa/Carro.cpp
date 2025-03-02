#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    //entrada 
    float valorT, pagamento;
    int venda, identidade;
    string nome, sobrenome;

    //defini��o de g�nero
    cout << "Por favor, defina o vendedor:\n1. Mulher\n2. Homem\n(Por favor, marque 1 ou 2): ";
    cin >> identidade;

    //coleta de dados para vendedora
    if (identidade == 1) {
        cout << "\n\nPor favor, insira o primeiro nome da vendedora da Pica Pau Ltda: ";
        cin >> nome;
        cout << "\nPor favor, insira o sobrenome da vendedora: ";
        cin >> sobrenome;
        cout << "\nPor favor, informe quantos carros a " << nome << " vendeu: ";
        cin >> venda;
        cout << "\nPor favor, informe o valor total de vendas da " << nome << ": ";
        cin >> valorT;

        //processo e sa�da para vendedora
        pagamento = (50 * venda) + 350.00 + (0.05 * valorT);

        cout << "\n==================================================================\n";
        cout << "Esses s�o os dados da vendedora:\nNome: " << nome  << " " << sobrenome  << "\nQuantidade de vendas: " << venda
             << "\nValor total de vendas: " << valorT << "\nSal�rio: " << pagamento;
        cout << "\n==================================================================\n";
    }

    //coleta de dados para vendedor
    else if (identidade == 2) {
        cout << "\n\nPor favor, insira o primeiro nome do vendedor da Pica Pau Ltda: ";
        cin >> nome;
        cout << "\nPor favor, insira o sobrenome do vendedor: ";
        cin >> sobrenome;
        cout << "\nPor favor, informe quantos carros o " << nome << " vendeu: ";
        cin >> venda;
        cout << "\nPor favor, informe o valor total de vendas do " << nome << ": ";
        cin >> valorT;

        //processo e sa�da para vendedor
        pagamento = (50 * venda) + 350.00 + (0.05 * valorT);

        cout << "\n==================================================================\n";
        cout << "Esses s�o os dados do vendedor:\nNome: " << nome << " " << sobrenome <<"\nQuantidade de vendas: " << venda
             << "\nValor total de vendas: " << valorT << "\nSal�rio: " << pagamento;
        cout << "\n==================================================================\n";
    }

    // Caso o valor inserido n�o seja v�lido
    else {
        cout << "\n=========================================================================================\n";
        cout << "!!! O valor inserido n�o � v�lido no sistema, por favor reinicie e insira um valor v�lido !!!\n";
        cout << "=========================================================================================\n";
    }
}
