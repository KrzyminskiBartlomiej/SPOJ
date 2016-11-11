#include <iostream>

using namespace std;

int main()
{
    int ostatnia;

    string wyraz;

    while(cin >> wyraz)
    {
        ostatnia = wyraz.length();

        for(int i=ostatnia-1; i>=0; i--)
        {
            cout << wyraz[i];
        }

        cout << endl;
    }
    return 0;
}