#include <iostream>

using namespace std;

int main()
{
    int ile,ile_l, liczby;
    int ciag[10000];
    cin >> ile, ile_l, ciag;

    for(int i=1; i<=ile; i++)
    {
        cin >> ile_l;

        for(int j=0; j<ile_l; j++)
        {
            cin >> ciag[j];
        }

        for(int k=ile_l-1; k>=0; k--)
        {
            cout << ciag[k] << " ";
        }
        cout << endl;
    }

    return 0;
}

