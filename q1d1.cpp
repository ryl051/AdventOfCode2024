#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int sum = 0;
    int a, b;
    vector<int> v1, v2;
    while(cin>>a>>b){
        v1.push_back(a);
        v2.push_back(b);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    
    for(int i = 0; i < v1.size();i++){
        sum+= abs(v1[i]-v2[i]);
    }

    cout<< sum;
}