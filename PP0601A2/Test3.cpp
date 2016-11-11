#include <iostream>

using namespace std;

int main() {

    int number[2] = {42,42}, counter = 0;
    
    while(1){
        
        cin >> number[0];
        
        if((number[0] == 42) && (number[1] != 42)){
            
            counter++;
        }
        
        number[1] = number[0];
       
        if(counter == 3){
            cout << number[0] << endl;
            break;
        }
        cout << number[0] << endl;
    }
    return 0;
}