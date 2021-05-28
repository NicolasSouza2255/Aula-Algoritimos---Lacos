#include <iostream>

using namespace std;

int main()
{
    int contar = 100, somatotal = 0;

    while(contar <= 200 ){
        somatotal = somatotal + contar;
        contar++;

    }

    cout << "A Soma Eh: " << somatotal;

    return 0;
}
