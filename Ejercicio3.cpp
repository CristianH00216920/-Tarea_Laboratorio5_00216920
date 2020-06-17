#include "iostream"

using namespace std;


bool bisiesto(int anio){

    if ((anio%4 == 0)){
        return true;
    }else if ((anio % 4) ==0 && (anio % 100) !=0){
            return true;
    }
    else{
        return false;
    }
}

main()
{
    int n=0;
    bool retorno = 0;

    cout << "\nIntroduzca un anio: ";
    cin >> n;

    bisiesto(n);

    retorno=bisiesto(n);

    if (retorno == true )
    {
        cout<<"\n\nEl anyo es bisiesto";
    }else
    {
       cout<<"\n\nEl anyo no es bisiesto";
    }
}
