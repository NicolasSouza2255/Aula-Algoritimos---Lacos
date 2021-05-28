#include <iostream>

using namespace std;

int main()
{

    int base, expoente, resultado = 1, verificador;

    cout << "Insira Uma Base Inteira e Positiva: ";
    cin >> base;

    cout << "Insira Uma Expoente Inteiro e Positivo: ";
    cin >> expoente;

    for(base,expoente,verificador = 1 ; verificador <= expoente; verificador++){

            resultado = resultado * base;
        }
    cout << "Resultado =  " <<resultado;
    }



