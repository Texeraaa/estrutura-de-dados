#include <iostream>
#include <locale.h>
using namespace std;

struct Paciente{
    string nome ;
    int idade;
    string sintomas;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    Paciente paciente;

    char continuar = 's';

    while(continuar == 's' || continuar == 'S'){
    cout << "Digite o nome do paciente: ";
    getline(cin, paciente.nome);

    cout << "Digite a idade do paciente: ";
    cin >> paciente.idade;

    cin.ignore();

    cout << "Digite os sintomas do paciente: ";
    getline(cin, paciente.sintomas);

    cout << "Deseja adicionar outro paciente? (s/n) ";
    cin >> continuar;
    cin.ignore();
    }
    return 0;
}
