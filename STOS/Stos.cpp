#include <iostream>

using namespace std;

int rozmiar, stos[10];

//-------------------------------------------------------------------

void push()
{


    if(rozmiar>=10)
    {
        cout << ":(" << endl;
    }
    else
    {
        cout << ":)" << endl;

        cin >> stos[rozmiar] ;

        rozmiar+=1;

    }
}

//-------------------------------------------------------------------

void pop()
{
    if(rozmiar==0)  cout << ":(" << endl;
    else
    {
        rozmiar-=1;
        cout << stos[rozmiar] << endl;
    }
}

//-------------------------------------------------------------------

int main()
{
    int rozmiar=0;

    char wybor;

    while(cin >> wybor)
    {
        if(wybor==43)//+
        {
            push();
        }
        if(wybor==45)//-
        {
            pop();
        }
    }
    return 0;
}