#include <iostream>
#include <string>

using namespace std;

string code;
int wordToNum(int index) {
    if(index + 3 <= code.length()) {
        string sub = code.substr(index, 3);
        if(sub == "one") return 1;
        if(sub == "two") return 2;
        if(sub == "six") return 6;
    }
    
    if(index + 4 <= code.length()) {
        string sub = code.substr(index, 4);
        if(sub == "four") return 4;
        if(sub == "five") return 5;
        if(sub == "nine") return 9;
    }
    
    if(index + 5 <= code.length()) {
        string sub = code.substr(index, 5);
        if(sub == "three") return 3;
        if(sub == "seven") return 7;
        if(sub == "eight") return 8;
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