#include <iostream>

using namespace std;


int main()
{
    int n;

    cin >> n;

    for(int i=0; i<=n; i++)
    {
        if(n==0) cout << 0;
        else if(n==3)
        {
            cout << "2 0 3 1";
            break;
        }

        else if(n>2)
        {
            if(i%2==0)
            {
                cout << i << " ";
            }
        }
        else
        {
            cout << "NIE";
            break;
        }
    }

    for(int i=0; i<=n; i++)
    {
        if(n==3) break;
        if(n>2)
        {
            if(i%2==1)
            {
                cout << i << " ";
            }
        }
    }

    return 0;
}
