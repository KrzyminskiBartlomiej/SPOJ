#include <iostream>

using namespace std;

int ile;

int main()
{
    cin >> ile;

    for (int i = 1; i<= ile; i++)
    {
        long long liczbaK = 1;
        int silnia;

        cin >> silnia;

        if(silnia==0) cout << 0 << " " << 1 << endl;

        else if (silnia>9 )
        {
            cout << 0 << " " << 0 << endl;
        }
        else if (silnia > 4 && silnia <= 9)
        {
            liczbaK = 24;

            for(int z = 5; z <= silnia; z++)
            {
                liczbaK *= z;
            }

            cout << (liczbaK % 100)/10 << " " << 0 << endl;
        }
        else if (silnia <= 4)
        {
            for (int j = 1; j <= silnia; j++)
            {
                liczbaK *= j;
            }

            cout << liczbaK/ 10 <<" "<< liczbaK % 10 << endl;
        }
    }
    return 0;
}

