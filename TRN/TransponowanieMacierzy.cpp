#include <iostream>

using namespace std;

int main() {

    int rows, columns;

    cin >> rows >> columns;

    int ** array = new int * [rows];

    for (int i = 0; i < rows; i++) {

        array[i] = new int [columns];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {

            cin >> array[i][j];
        }
    }

    int ** secArr = new int * [columns];
    
    for(int i=0; i<columns; i++){
        
        secArr[i] = new int [rows];
    }
    
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {

            secArr[i][j] = array[j][i];
            cout << secArr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}