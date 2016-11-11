#include <iostream>

using namespace std;

int main()
{
    int aX, aY, bX, bY, cX, cY, tests, equation;

    cin >> tests;

    for(int i=0; i<tests; i++)
    {
        cin >> aX >> aY >> bX >> bY >> cX >> cY;

        equation = ((cY - aY)*(bX - aX) - (bY - aY)*(cX - aX));

        if(equation == 0)
        {
             cout << "TAK" << endl;
        }
        else cout << "NIE" << endl;
    }

    return 0;
}