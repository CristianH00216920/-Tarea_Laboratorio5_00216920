#include "iostream"

using namespace std;

int funcionMCD(int n1, int n2)
{
    if(n1==0)
    {
        return n2;
    }
    return funcionMCD(n2 % n1, n1);
}

main()
{
    int n1, n2;
    
    cout <<"Ingrese el primer numero: ";
    cin>> n1;

    cout <<"Ingresa el sugundo numero: ";
    cin >> n2;

    cout <<"\n\nEl MCD de los dos numero es: "<< + funcionMCD(n1,n2);


     cout <<"\n\n";
    system ("PAUSE");

}