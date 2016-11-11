#include <iostream>

using namespace std;

int ile, ostatnia;
string slowo;

int main()
{
    cin >> ile;

    for(int i=0; i<ile; i++)
    {
       cin >> slowo;

       for(int i=0; i<slowo.length()/2;i++)
       {
           cout << slowo[i];
       }
        cout << endl;
    }
    return 0;
}