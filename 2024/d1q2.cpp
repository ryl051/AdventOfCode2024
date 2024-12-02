#include <iostream>
#include <vector>
#include <unordered_map> 
using namespace std;

int main() {
    int sum = 0;
    int a, b;
    vector<int> v1, v2;

    while (cin >> a >> b) {
        v1.push_back(a);
        v2.push_back(b);
    }

    unordered_map<int, int> freq_map;
    for (int num : v2) {
        freq_map[num]++;
    }

    for (int num : v1) {
        sum += num * freq_map[num]; 
    }

    cout << sum;

    return 0;
}
