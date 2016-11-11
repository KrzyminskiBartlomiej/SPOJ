#include <iostream>

using namespace std;

int ile, v1,v2;

int main()
{
    cin >> ile;

    for(int i=1; i<=ile;i++)
    {
        cin >> v1 >> v2;
        cout << 2*v1*v2/(v1+v2) << endl;

    }
    return 0;
}