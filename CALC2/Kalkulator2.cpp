#include <iostream>

using namespace std;

int main()
{
    int slot[10]= {0}, liczba, nr, a, b;

    string znak;

    while(cin >> znak)
    {
        if((znak=="z") && (nr < 10))
        {
            cin >> nr;
            cin >> liczba;
            slot[nr] = liczba;
        }

        else
        {
            if(znak=="+")
            {
                cin >> a;
                cin >> b;
                cout << slot[a] + slot[b] << endl;
            }
            if(znak=="-")
            {
                cin >> a;
                cin >> b;
                cout << slot[a] - slot[b] << endl;
            }
            if(znak=="*")
            {
                cin >> a;
                cin >> b;
                cout << slot[a] * slot[b] << endl;
            }
            if(znak=="/")
            {
                cin >> a;
                cin >> b;
                cout << slot[a] / slot[b] << endl;
            }
            if(znak=="%")
            {
                cin >> a;
                cin >> b;
                cout << slot[a] % slot[b] << endl;
            }
        }
    }

    return 0;
}
