#include <iostream>
#include <locale.h>
using namespace std;

struct Filme{
    string nome;
    int atuacao;
    int enredo;
    int ef;
};
int main() {
    setlocale(LC_ALL, "Portuguese");

    Filme filme;
    char continuar = 's';
    int accEnredo, accAtuacao, accEF = 0;
    int contador = 0;
    float mediaEnredo, mediaAtuacao, mediaEF = 0;


    while (continuar == 's' || continuar == 'S') {
        cout << "Qual o nome do filme? ";
        getline(cin, filme.nome);


        cout << "de 0 a 10 qual a sua nota para a atuacao? ";
        cin >> filme.atuacao;
        accAtuacao = accAtuacao + filme.atuacao;

        cout << "de 0 a 10 qual a sua nota para o enredo? ";
        cin >> filme.enredo;
        accEnredo = accEnredo + filme.enredo;

        cout << "de 0 a 10 qual a sua nota para o Efeitos especiais? ";
        cin >> filme.ef;
        accEF = accEF + filme.ef;

        contador = contador + 1;
        cin.ignore();

        cout << "Deseja cadastrar mais notas (s/n): ";
        cin >> continuar;
        cin.ignore();
    }

    mediaEnredo = accEnredo / contador;
    mediaAtuacao = accAtuacao / contador;
    mediaEF = accEF / contador;

    cout << "A média das notas do enredo é de: " << mediaEnredo << endl();
    cout << "A média das notas da atuação é de: " << mediaAtuacao << endl();
    cout << "A média das notas dos efeitos especiais é de: " << mediaEF << endl();






}
