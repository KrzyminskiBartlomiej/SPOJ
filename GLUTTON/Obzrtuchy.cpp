#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double  czas[100000], doba=86400, ile_ciast[100000], suma=0;

    int wynik, ile, obzartuchy, ciastka;

    cin >> ile;

    for(int i=1; i<=ile; i++)//petla liczaca ilosc zestawow
    {
        cin >> obzartuchy >> ciastka;

        for(int j=0; j<obzartuchy; j++)//petla liczaca czasy dla podanej ilosci obzartuchow
        {
            cin >> czas[j];
        }

        for(int j=0; j<obzartuchy; j++)//petla liczaca ile ciastek zje kazdy obzartuch
        {
            ile_ciast[j] = floor(doba / czas[j]);//zaokragla liczbe ciastek do dolu
        }

        for(int j=0; j<obzartuchy; j++)//petla sumujaca ilosc ciastek
        {
            suma += ile_ciast[j];
        }

        wynik = ceil(suma/ciastka);

        cout << wynik << endl;

        suma=0;
    }

    return 0;
}