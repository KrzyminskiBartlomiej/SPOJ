#include <iostream>

using namespace std;

int main() {

    char tab[26];
    char sign = 'A';
    string sentence, newSent;
    
    for(int i=0; i<26; i++){
        
        tab[i] = sign;
        sign++;
    }
    
    while(getline(cin,sentence)){
        
        for(int i=0; i<sentence.length(); i++){
            
            if(sentence[i] == ' '){
                
                newSent += ' ';
            }
            
            for(int j=0; j<26; j++){
                
                if((sentence[i] == 'X') && (tab[j] == 'X')){
                    
                    newSent += 'A';
                }
                
                else if((sentence[i] == 'Y') && (tab[j] == 'Y')){
                    
                    newSent += 'B';
                }
                else if((sentence[i] == 'Z') && (tab[j] == 'Z')){
                    
                    newSent += 'C';
                }
                
                else if(sentence[i] == tab[j]){
                    
                    newSent += tab[j+3];
                }
            }
        }
        cout << newSent << endl;
        newSent = "";
    }
    return 0;
}

