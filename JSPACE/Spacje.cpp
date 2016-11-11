#include <iostream>
#include <cctype>

using namespace std;

string arrayCleaner(string num){
    
    string temp;
    
    for(int i = 0; i < num.length(); i++){
        
        if(num[i] == ' ') temp += "";
         
        else if((num[i-1] == ' ') && (num[i] != ' ')){
            
            temp += toupper(num[i]);
        }
        else if((num[i] == ' ') && (num[i+1] == ' ')) {
            
            temp += "";
        }
        else temp += tolower(num[i]);
    }
    if(temp[0] == ' '){
        
        temp.erase(0,1);
        temp[0] = toupper(temp[0]);
    }
    

    for(int i = temp.length() - 1; i >= 0; i--){
        
        if(temp[i] != ' '){
            
            break;
        }
        else temp.erase(i,1);
    }
   
    return temp;
}

int main() {

    string str, newOne = "";
    bool flag = false;

    while (getline(cin, str)) {
        
        if((str[0] != ' ') && (str[0] == toupper(str[0]))) flag = true;
        newOne = arrayCleaner(str);
        if(flag) newOne[0] = toupper(newOne[0]);
        cout << newOne << endl;
        flag = false;
    }
    return 0;
}