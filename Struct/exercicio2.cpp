#include <iostream>
#include <locale.h>
using namespace std;

struct Livro{
    string titulo;
    string autor;
    int ano;

};
int main() {
    setlocale(LC_ALL, "Portuguese");

    Livro livro;
    char continuar = 's';


    while (continuar == 's' || continuar == 'S') {
        cout << "Digite o titulo do livro: ";
        getline(cin, livro.titulo);

        cout << "Digite o nome do autor do livro: ";
        getline(cin, livro.autor);


        cout << "Qual o ano de publicação do livro?: ";
        cin >> livro.ano;
        cin.ignore();


        cout << "Deseja cadastrar mais um livro? (s/n): ";
        cin >> continuar;
        cin.ignore();
    }






}
