#include <iostream>

using namespace std;

int main() {

    string line, newLine = "";
    int length, i = 0;

    while (getline(cin, line)) {

        length = line.length();

        while (length > i) {

            if ((line[i] == '?') && (line[i + 1] == '?') && (line[i + 2] == '=')) {

                newLine += '#';
                line.erase(i,2);
                length-=2;
            }
            else if ((line[i] == '?') && (line[i + 1] == '?') && (line[i + 2] == '/')) {

                newLine += '\\';
                line.erase(i,2);
                length-=2;
            }
            else if ((line[i] == '?') && (line[i + 1] == '?') && (line[i + 2] == '\'')) {

                newLine += '^';
                line.erase(i,2);
                length-=2;
            }
            else if((line[i] == '?') && (line[i + 1] == '?') && (line[i + 2] == '(')) {

                newLine += '[';
                line.erase(i,2);
                length-=2;
            }
            else if ((line[i] == '?') && (line[i + 1] == '?') && (line[i + 2] == ')')) {

                newLine += ']';
                line.erase(i,2);
                length-=2;
            }
            else if ((line[i] == '?') && (line[i + 1] == '?') && (line[i + 2] == '!')) {

                newLine += '|';
                line.erase(i,2);
                length-=2;
            }
            else if ((line[i] == '?') && (line[i + 1] == '?') && (line[i + 2] == '<')) {

                newLine += '{';
                line.erase(i,2);
                length-=2;
            }
            else if ((line[i] == '?') && (line[i + 1] == '?') && (line[i + 2] == '>')) {

                newLine += '}';
                line.erase(i,2);
                length-=2;
            }
            else if ((line[i] == '?') && (line[i + 1] == '?') && (line[i + 2] == '-')) {

                newLine += '~';
                line.erase(i,2);
                length-=2;
            }
            else
            {
                newLine += line[i];
            }
            
            i++;
        }
        
        cout << newLine << endl;
        newLine = "";
        i = 0;
    }
    
    return 0;
}