#include <iostream>

using namespace std;

int main()
{
        float horasTrabalhadas,salarioMinimo, valorHoras, salarioBruto,imposto, salarioFinal;
        cout << "Quantas horas foram trabalhadas?" << endl;;
        cin >> horasTrabalhadas;

        cout << "Qual o salario minimo atual?" << endl;
        cin >> salarioMinimo;

        valorHoras = salarioMinimo / 2;
        salarioBruto = valorHoras * horasTrabalhadas;
        imposto = salarioBruto * 0.03;
        salarioFinal = salarioBruto - imposto;

        cout << "Suas horas valem: " << valorHoras << "R$" << endl;
        cout << "Seu salario bruto é de: " << salarioBruto << "R$" << endl;
        cout << "O imposto a pagar é de: " << imposto << "R$" << endl;
        cout << "Você vai receber: " << salarioFinal << "R$" << endl;

}
