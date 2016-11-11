#include <iostream>

using namespace std;

int main()
{
    int N, lastOne, tag=0;
    string line, newLine;

    cin >> N;

    for(int i=0; i<=N; i++)
    {
        getline(cin,line);
        newLine+=line;
    }

    lastOne = newLine.length();

    for(char j='a'; j<='z'; j++)
    {

        for(int i=0; i<lastOne; i++)
        {
            if(j==newLine[i])
            {
                tag++;
            }
        }
        if(tag>0)
        {
            cout << endl << j << " " << tag;
            tag = 0;
        }
    }

    for(char j='A'; j<='Z'; j++)
    {

        for(int i=0; i<lastOne; i++)
        {
            if(j==newLine[i])
            {
                tag++;
            }
        }
        if(tag>0)
        {
            cout << endl << j << " " << tag;
            tag = 0;
        }
    }

    return 0;
}