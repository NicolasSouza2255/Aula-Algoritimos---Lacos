#include <iostream>

using namespace std;

int main()
{
    int numero1, numero2, conta;

    for(numero1 = 1;numero1 <= 10; numero1++){
        cout << endl;
        for(numero2 = 1;numero2 <= 10; numero2++){
            conta = numero1 * numero2;
            cout << numero1 << " X " <<numero2 << " = "<< conta << endl;
        }
    }
    return 0;
}
