#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int ile, ostatnia, pow=1;
    string slowo, bufor;

    cin >> ile;

    for(int i=1; i<=ile; i++)
    {
        cin >> slowo;
        transform(slowo.begin(),slowo.end(),slowo.begin(),::toupper);
        ostatnia = slowo.length();
        for(int j=0; j<ostatnia; j++)
        {
            if(slowo[j]==slowo[j+1])
            {
                pow++;
            }

            else
            {
                if(pow==1)
                {
                    cout << slowo[j];
                }

                if(pow==2)
                {

                    cout << slowo[j-1];
                    cout << slowo[j];
                    pow=1;
                }

                else if(pow>2)
                {
                    cout << slowo[j] << pow;
                    pow=1;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
