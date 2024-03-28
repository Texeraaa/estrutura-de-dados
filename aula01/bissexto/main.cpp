#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int vetor[15];

    for(int i = 0; i < 15; i++){
    int numero_aleatorio;
    bool repetido;
    do{
        repetido = false;
        numero_aleatorio = rand() % 25 + 1;
        for(int j = 0; j < i; j++){
            if(vetor[j] == numero_aleatorio){
                repetido = true;
                break;
            }
        }
    }while(repetido);
    vetor[i] = numero_aleatorio;
    }

    for(int i = 0; i < 15;i++){
        cout << i << "\t" << vetor[i] << "\n";
    }
}
