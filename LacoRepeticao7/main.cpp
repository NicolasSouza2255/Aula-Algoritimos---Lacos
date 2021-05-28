#include <iostream>

using namespace std;

int main()
{

    int numero, soma = 0;


    do{

    cout << "Insira Uma Numero ou Digite 0 Para Cancelar: ";
    cin >> numero;

    if(numero%2 == 0){
        soma = soma + numero;
    }
        }while(numero != 0);

    cout << "Resultado =  " <<soma;
    }
