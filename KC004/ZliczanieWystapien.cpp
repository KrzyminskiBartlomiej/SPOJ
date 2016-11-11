#include <iostream>

using namespace std;

int main()
{
    int chosenOne, howMany, flag = 0;
    while(cin >> chosenOne)
    {
        cin >> howMany;

        int * arr = new int [howMany];

        for(int i = 0; i < howMany; i++)
        {
            cin >> arr[i];
        }

        for(int i = 0; i < howMany; i++)
        {
            if(arr[i] == chosenOne) flag++;
        }

        cout << flag << endl;
        flag = 0;

        delete [] arr;
    }

    return 0;
}
