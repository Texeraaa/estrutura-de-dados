#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Qual a idade do nadador?" << endl;
    cin >> age;

    if(age < 5){
        cout << "O Nadador não tem idade o suficiente" << endl;
    }
    if(age >= 5 && age <= 7)
    {
        cout << "Categoria: infantil A" << endl;
    }
    if(age >= 8 && age <= 10)
    {
        cout << "Categoria: infantil B" << endl;
    }
    if(age >= 11 && age <= 13)
    {
        cout << "Categoria: Juvenil A" << endl;
    }
    if(age >= 14 && age <= 17)
    {
        cout << "Categoria: Juvenil B" << endl;
    }
    if(age >17)
    {
        cout << "Categoria: Senior" << endl;
    }

}
