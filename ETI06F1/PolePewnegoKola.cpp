#include <iostream>
#include <math.h>

using namespace std;

int main() {

    double  r, d, findR, field, halfD;

    double  pi;

    cout.precision(5);

    pi = 3.141592654;

    cin >> r >> d;

    halfD = d/2;

    findR = sqrt(pow(r,2) - pow(halfD,2));

    field = pi*(pow(findR,2));

    cout << field << endl;

}