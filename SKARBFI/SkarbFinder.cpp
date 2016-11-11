#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int tests, tips, direction, steps;
    int xWay = 0, yWay = 0;

    cin >> tests;

    for(int i=0; i<tests; i++){

        cin >> tips;

        for(int j=0; j<tips; j++){

            cin >> direction >> steps;

            switch(direction){
            case 0:
                {
                    yWay += steps;
                }break;

            case 1:
                {
                    yWay -= steps;
                }break;

            case 2:
                {
                    xWay -= steps;
                }break;

            case 3:
                {
                    xWay += steps;
                }break;
            }
        }

        if((xWay == 0) && (yWay == 0)){

            cout << "studnia" << endl;
        }
        else if(yWay >= 0){

            if(yWay == 0){

                if(xWay < 0) cout << 2 << " " << abs(xWay) << endl;
                else if(xWay > 0) cout << 3 << " " << abs(xWay) << endl;
            }

            if(yWay > 0){

                cout << 0 << " " << abs(yWay) << endl;

                if(xWay < 0) cout << 2 << " " << abs(xWay) << endl;
                else if(xWay > 0) cout << 3 << " " << abs(xWay) << endl;
            }
        }

        else if(yWay < 0){

            cout << 1 << " " << abs(yWay) << endl;

            if(xWay < 0) cout << 2 << " " << abs(xWay) << endl;
            else if(xWay > 0) cout << 3 << " " << abs(xWay) << endl;
        }

        xWay = yWay = 0;
    }

    return 0;
}