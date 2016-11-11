#include <iostream>

using namespace std;

int main() {

  int tests, value, divide, notDivide;;

    cin >> tests ;

    for(int i=0; i<tests; i++){

        cin >> value >> divide >> notDivide;

        for(int j=1; j<value; j++){

            if((j%divide == 0) && (j%notDivide != 0)){

                cout << j << " ";
            }
        }
        cout << endl;
    }
}