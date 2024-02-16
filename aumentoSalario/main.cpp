#include <iostream>

using namespace std;

int main()
{
    float salario, novoSalario;
    cout << "Insira o salario do funcionario" << endl;
    cin >> salario;

    if(salario < 1000)
    {
        novoSalario = salario * 1.15;
        cout << "O novo salario do funcionario, com o reajuste é de: " << novoSalario;
    }
    if(salario >= 1000 && salario <= 1500)
    {
        novoSalario = salario * 1.10;
        cout << "O novo salario do funcionario, com o reajuste é de: " << novoSalario;
    }
    if(salario > 1500)
    {
        novoSalario = salario * 1.05;
        cout << "O novo salario do funcionario, com o reajuste é de: " << novoSalario;
    }
}
