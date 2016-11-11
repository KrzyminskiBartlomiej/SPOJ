#include <iostream>

using namespace std;

int main()
{
    char filter;
    string sentence, newSentence;
    int lastOne;

    while(getline(cin,sentence))
    {
        filter = sentence[0];
        lastOne = sentence.length();

        for(int i=2; i<lastOne; i++)
        {

            if(sentence[i] != filter)
            {

                newSentence+=sentence[i];
            }
        }
        cout << newSentence << endl;
        newSentence = "";
    }

    return 0;
}