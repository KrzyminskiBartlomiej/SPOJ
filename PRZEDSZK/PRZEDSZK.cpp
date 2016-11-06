#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a, b,ile, iloczyn;

    cin >> ile;

    for(int i=0; i<ile; i++)
    {
        cin >> a >> b;
        iloczyn = a*b;

        while(a!=b)
        {
            if(a>b) a-=b;
            else b-=a;
        }

        cout << iloczyn/a << endl;
    }

    return 0;
}

