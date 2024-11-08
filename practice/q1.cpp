#include <iostream>
#include <string>

using namespace std;

int main(){
    string code;
    int sum = 0;
    while(true){
        getline(cin, code);
        if(code.empty()){
            break;
        }

        for(int i = 0; i < code.length();i++){
            if(isdigit(code[i])){
                sum += (code[i] - '0') * 10;
                break;
            }
        }

        for(int j = code.length()-1; j >= 0; j--){
            if(isdigit(code[j])){
                sum += code[j] - '0';
                break;
            }
        }
    }
    cout<< sum;
}