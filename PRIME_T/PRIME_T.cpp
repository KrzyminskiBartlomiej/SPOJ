#include <iostream>
#include <cmath>

using namespace std;

double isPrime(int p)
{
    double a = sqrt(p);

    int b = 2;

    while(b <= a)
    {
        if((p%b) == 0) return(0);
        b++;
    }
}


int main()
{
    int howMuch;

    double n;

    cin >> howMuch;

    for(int i=1; i<=howMuch; i++)
    {
        cin >> n;

        if(n<2) cout << "NIE" << endl;


        else if(isPrime(n))
        {
            cout << "TAK" << endl;
        }
        else
            cout << "NIE" << endl;

    }

    return 0;
}
