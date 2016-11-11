#include <iostream>

using namespace std;

int main()
{
    string sentence;
    int flag = 0;

    while (getline(cin,sentence)){

        flag++;
    }
    cout << flag << endl;
    return 0;
}
