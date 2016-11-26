#include <iostream>

using namespace std;

int main()
{
    string mode, key, word;
    char temp = '0';
    int counter = 0;

    cin >> mode >> key >> word;

    for(int i = 0; i < word.length(); i++){
        for(int j = 0; j <= 9; j++){

            if(key[counter] == temp){
                break;
            }
            if(mode == "SZYFRUJ"){

                if(word[i] == 'Z'){

                word[i] = 'A';
                }
            }else
                if(word[i] == 'A'){

                word[i] = 'Z';
                }

            temp++;

            if(mode == "SZYFRUJ"){
                word[i]++;
            }
            else word[i]--;
        }

        temp = '0';

        if(counter == (key.length()-1)){

            counter = 0;
        }
        else
            counter++;
    }
    cout << word;

    return 0;
}