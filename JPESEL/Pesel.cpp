#include <iostream>
#include <sstream>

using namespace std;

int main() {

    int tests, pMulti[11] = {1,3,7,9,1,3,7,9,1,3,1};
    int array[11], sum = 0;
    long long pesel;
    
    cin >> tests;
       
    for(int i=0; i<tests; i++){
        
        cin >> pesel;
        ostringstream ss;
        ss << pesel;
        string temp = ss.str();
        
        for(int j=0; j<temp.length(); j++){
            
            array[j] = temp[j] - '0';
            sum += (array[j]*pMulti[j]);
        }
        
        if((sum % 10 == 0) && (sum > 0)){
            cout << "D" << endl;
        }
        else{
            cout << "N" << endl;
        }
        sum = 0;
    }
    return 0;
}