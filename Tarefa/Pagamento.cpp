#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    //Info Funcionario
    
    //entrada
    string nome, sobrenome;
    float sal_bruto, sal_liqui, desc_prev, sal_des, desc_ir;
    
    //coleta de dados
    cout << "Por favor informe o nome do funcion�rio: ";
    cin >> nome;
    cout << "Por favor, insira o sobrenome do funcion�rio: ";
    cin >> sobrenome;
    cout << "Por favor informe o sal�rio bruto: ";
    cin >> sal_bruto;
    
    //processo
    desc_prev = sal_bruto * 0.10;
    sal_des = sal_bruto - desc_prev;
    desc_ir = sal_des * 0.25;
    sal_liqui = sal_des - desc_ir;
    
    //saida
   	cout << "\n======= Folha de Pagamento =======\n";
    cout << "Nome: " << nome  << " " << sobrenome;
    cout << "\nSal�rio Bruto: R$" << sal_bruto;
    cout << "\nDesconto Previd�ncia (10%): R$" << desc_prev;
    cout << "\nDesconto Imposto de Renda (25% sobre o restante): R$" << desc_ir;
    cout << "\nSal�rio L�quido: R$" << sal_liqui;
}
