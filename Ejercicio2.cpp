#include "iostream"

using namespace std;

main()
{

    int h,m,s;

    cout << "\nIntroduzca la hora: ";
    cin >> h;

    cout << "\nIntroduzca los minutos: ";
    cin >> m;

    cout << "\nIntroduzca los segundos: ";
    cin >> s;

    if (h >= 0 && h <=23 && m >=0 && m <= 59 && s>=0 && s <= 59)
    {
        s++;
        if (s == 60)
        {
            s = 0;
            m++;
            if (m==60)
            {
                m = 0;
                h++;
                if (h==24)
                {
                    h=0;
                }
            }  
        }
        cout <<"\n\nUn segundo despues la hora es: " << +h << ":" << +m << ":" << +s;
    }
    else
    {
        cout <<"\n\nError la hora ingresada es incorrecta: ";
    }
    

    cout <<"\n\n";
    system ("PAUSE");


}