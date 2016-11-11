#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int tests, numbers, buf;


    cin >> tests;

    for(int i=0; i<tests; i++){

        cin >> numbers;

        int tab[numbers];

        for(int j=0; j<numbers; j++){

            cin >> tab[j];
        }

        buf = tab[0];

        for(int j=0; j<numbers; j++){


            swap(tab[j],tab[j+1]);
            tab[numbers] = buf;
        }

        for(int j=0; j<numbers; j++){

            cout << tab[j] << " ";
        }

        cout << endl;

    }
    return 0;
}