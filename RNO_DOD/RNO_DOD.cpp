#include <iostream>

using namespace std;

int main()
{
    int t,n,suma=0,liczba[100];
    cin >> t;

    for(int i=1; i<=t; i++)
    {
        cin >> n;

        for(int i=1; i<=n; i++)
        {
            cin >> liczba[n];
            suma+=liczba[n];
        }
        cout << suma <<endl;
        suma=0;
    }
    
    return 0;
}
