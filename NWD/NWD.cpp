#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a, b, c, tests;

    cin >> tests;

    for(int i=0; i<tests; i++)
    {
        cin >> a >> b;

        while(b!=0)
        {
            c = a % b;
            a = b;
            b = c;
        }
        cout << a << endl;
    }
    return 0;
}

