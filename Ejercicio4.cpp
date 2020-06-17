#include "iostream"

using namespace std;


bool es_bisiesto(int anio){
    return((anio % 4) ==0 && (anio % 100) !=0) || ((anio % 4) == 0);
}

int dia_mes(int mes, int anio)
{
    int dias = 31;
    if (mes==4 || mes==6 || mes==9 || mes==12 ){
        dias =30;
    }
    else if (mes ==2){
        if (es_bisiesto(anio)){
            dias =29;
        }
        dias =28;
    }else
    {
        cout <<"no mames";
    }
    return dias;   
}

main()
{   
    int dia, mes, anio;

    
    cout << "\nIntroduzca el dia: ";
    cin >> dia;

    cout << "\nIntroduzca el mes: ";
    cin >> mes;

    cout << "\nIntroduzca los anio: ";
    cin >> anio;

    dia++;
    if (dia > dia_mes(mes,anio)){
        dia=1;
        mes++;
        if (mes>12)
        {
            mes=1;
            anio++;
        }
    }
    
    


    cout <<"\n\nEl siguiente dia es: " << dia << '/' << mes << '/' << anio << endl;
    
}