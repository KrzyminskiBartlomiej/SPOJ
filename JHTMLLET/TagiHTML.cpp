#include <iostream>


using namespace std;

int main() {

    string line, newLine;
    bool isTag = false;

    while(getline(cin,line)){

        newLine = "";

        for(int i =0; i < line.length(); i++){

            if(line[i] == '<'){
                isTag = true;
            }
            if(line[i] == '>'){
                isTag = false;
            }
            if(isTag){
                newLine+= toupper(line[i]);
            }
            else{
                newLine+=line[i];
            }
        }
        cout << newLine << endl;
    }

    return 0;
}