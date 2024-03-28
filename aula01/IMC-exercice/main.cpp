#include <iostream>

using namespace std;


string findImc(int imc)
{
    if(imc < 20){
        return "abaixo do peso";
    }

    if(imc >= 20  && imc <= 25){
        return "no peso ideal";
    }

    if(imc >= 25){
        return "acima do peso";
    }
}


int main()
{
    string name, state;
    float imc, weight, height;
    cout << "Olá! Vamos calcular seu IMC!" << endl;
    cout << "Para começar, qual é o seu nome?" << endl;
    cin >> name;
    cout << name << ", digite seu peso" << endl;
    cin >> weight;
    cout << name <<", digite sua altura" << endl;
    cin >> height;

    imc = weight / (height * height);
    state = findImc(imc);

    cout << name <<", seu imc é de " << imc << " você esta " << state << endl;

    return 0;
}
