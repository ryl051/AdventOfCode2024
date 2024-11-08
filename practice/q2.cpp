#include <iostream>
#include <string>

using namespace std;

string code;
int wordToNum(int index){
    
    if(index + 3 <= code.length() && code.substr(index, index + 3) == "one"){
        return 1; 
    }

    if(index + 3 <= code.length() && code.substr(index, index + 3) == "two"){
        return 2; 
    }

    if(index + 5 <= code.length() && code.substr(index, index + 5) == "three"){
        return 3; 
    }

    if(index + 4 <= code.length() && code.substr(index, index + 4) == "four"){
        return 4; 
    }

    if(index + 4 <= code.length() && code.substr(index, index + 4) == "five"){
        return 5; 
    }

    if(index + 3 <= code.length() && code.substr(index, index + 3) == "six"){
        return 6; 
    }

    if(index + 5 <= code.length() && code.substr(index, index + 5) == "seven"){
        return 7; 
    }

    if(index + 5 <= code.length() && code.substr(index, index + 5) == "eight"){
        return 8; 
    }

    if(index + 4 <= code.length() && code.substr(index, index + 4) == "nine"){
        return 9; 
    }

    return -1;
}

int main(){
    int sum = 0;
    while(true){
        getline(cin, code);
        if(code.empty()){
            break;
        }

        for(int i = 0; i < code.length(); i++){
            int wordNum = wordToNum(i);
            if(isdigit(code[i])){
                sum += (code[i] - '0') * 10;
                break;
            } else if(wordNum != -1){
                sum += wordNum * 10;
                break;
            }
        }

        for(int j = code.length()-1; j >= 0; j--){
            int wordNum = wordToNum(j);
            if(isdigit(code[j])){
                sum += code[j] - '0';
                break;
            } else if(wordNum != -1){
                sum += wordNum;
                break;
            }
        }
    }
    cout << sum;
}