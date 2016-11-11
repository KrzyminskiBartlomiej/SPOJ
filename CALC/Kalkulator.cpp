#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a,b;
    string znak;

 while(cin >> znak >> a >> b)
 {

            if(znak=="+") cout << a+b << endl;
            if(znak=="-") cout << a-b << endl;
            if(znak=="*") cout << a*b << endl;
            if(znak=="/") cout << a/b << endl;
            if(znak=="%") cout << a%b << endl;
 }
            return 0;
}