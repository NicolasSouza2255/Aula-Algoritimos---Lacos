#include <iostream>

using namespace std;

int main()
{

    int numero;


    do{

    cout << "Digite um Numero Real Positivo: ";
    cin >> numero;

    if(numero < 0){
        cout << "Numero Invalido, Tente Novamente. " <<endl<<endl;
    }

    else {
        cout << "O Numero Digitado Eh Valido";
    }
        }while(numero < 0);


}
