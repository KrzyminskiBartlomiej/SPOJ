#include <iostream>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main() {

    int tests, lastOne, a, b, c, replays = 0;
    string value, palindrom;

    cin >> tests;

    for(int i=0; i<tests; i++){

        cin >> value;

        for(;;){

            lastOne = value.length();

            for(int j=lastOne-1; j>=0; j--){

                palindrom += value[j] ;
            }

            if(value == palindrom ){

                break;
            }


            a = atoi(palindrom.c_str()) ;
            b = atoi(value.c_str());
            c = a+b;

            ostringstream ss,ww;
            ss << c;
            value = ss.str();
            ww << a;
            palindrom = ww.str();

            replays++;

            palindrom = "";
        }

        cout << palindrom << " " << replays << endl;

        replays = 0;
        palindrom = "";

    }
    return 0;
}
