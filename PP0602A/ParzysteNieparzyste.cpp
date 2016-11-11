#include <iostream>

using namespace std;

int main()
{
    int ile, liczby[100], ile_l;

    cin >> ile;

    for(int i=1; i<=ile; i++)
    {
        cin >> ile_l;

        for(int j=1; j<=ile_l; j++)
        {
            cin >> liczby[j];

            if(j%2==0)
            {
                cout << liczby[j] << " ";
            }
        }

        for(int j=1; j<=ile_l; j++)
        {
            if(j%2!=0)
            {
                cout << liczby[j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}