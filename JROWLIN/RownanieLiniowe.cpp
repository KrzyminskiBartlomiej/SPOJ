#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float a = 0.00, b = 0.00, c = 0.00, result;
    
    cin >> a >> b >> c;
    
    result = (c-b)/a;
    
    if(a == 0){
        
        if((c-b) != 0) cout << "BR" << endl;
        else if((c -b) == 0) cout << "NWR" << endl;
    }
    else cout << fixed << setprecision(2)<< result <<endl;
    
    return 0;
}