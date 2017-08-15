#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string s;
    int count = 0;
    int control = 0;
    int temp = 0;
    while(true){
        cin >> s;   //read in a string
        if(cin.eof()){   //if eof
            break;       //return, end
        }
        else if ( s == "//"){  // "//"
            for(int j = 0; j < count; j++){
                cout << " ";
            }
            cout << s;
            string ss;
            getline(cin, ss);
            cout << ss;
            cout << endl;
            temp = 1;
        } //if
        else if (s == "{"){    // "{"
            temp = 1;
            count++;
            cout << s;
            cout << endl;
        } //if
        else if ( s == ";"){ //;
            control = 1;
            temp = 1;
            cout << s;
            cout << endl;
        } //if
        else if (s == "}"){
            count--;
            if (control == 1){
                for(int i = 0; i < count; i++){
                    cout << " ";
                }
                cout << s;
                control = 0;
            }
            else{
                cout << endl;
                for(int j = 0; j < count; j++){
                    cout << " ";
                }
                cout << s;
            }
        } //if
        else{
            if (temp == 1){
                for(int i = 0; i < count; i++){
                    cout << " ";
                }
                cout << s << " ";
                temp = 0;
            }
            else{cout << s << " ";}
        } //if
    } //while
    return 0;
}
