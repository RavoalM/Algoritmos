#include <iostream>
#include <string>
using namespace std;

main() {
    string nome, produtoMaisBarato, produtoMaisVendido;
    float preco, precoMaisBarato = 999999, somaPreco = 0;
    int qtd, qtdMaisVendida = 0, totalProdutos = 0;

    while (true) {
        cout << "Nome do produto (ou 'fim' para encerrar): ";
        getline(cin, nome);

        if (nome == "fim") break;

        cout << "Preço unitário: ";
        cin >> preco;
        cout << "Quantidade vendida: ";
        cin >> qtd;
        cin.ignore();

        somaPreco += preco;
        totalProdutos++;

        if (preco < precoMaisBarato) {
            precoMaisBarato = preco;
            produtoMaisBarato = nome;
        }

        if (qtd > qtdMaisVendida) {
            qtdMaisVendida = qtd;
            produtoMaisVendido = nome;
        }
    }

    if (totalProdutos > 0) {
        cout << "\nProduto mais barato: " << produtoMaisBarato << " (R$ " << precoMaisBarato << ")\n";
        cout << "Produto mais vendido: " << produtoMaisVendido << " (" << qtdMaisVendida << " unidades)\n";
        cout << "Média de preço dos produtos: R$ " << (somaPreco / totalProdutos) << "\n";
    } else {
        cout << "Nenhum produto informado.\n";
    }

}

