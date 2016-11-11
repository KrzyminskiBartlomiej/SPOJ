#include <iostream>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    int tab[n], newTab[n];

    if(k>n){
        k %= n;
    }

    for(int i=0; i<n; i++){

        cin >> tab[i];
    }
    for(int i=0; i<n; i++){

        if((i-k) >= 0){

            newTab[i-k] = tab[i];
        }
        else
        newTab[i-k+n] = tab[i];

    }
    for(int i=0; i<n; i++){

        cout << newTab[i] << " ";
    }

    return 0;
}