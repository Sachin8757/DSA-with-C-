#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    unordered_map<int,int> m;
    vector<int> v = {1,2,2,3,4,4,5};
    m.emplace(1,0);
    m.emplace(2,0);

    bool exists = m.find(2) != m.end();
    cout << boolalpha << exists << endl; // prints "true" if key 1 exists, otherwise "false"
    for (int key : v) {
        auto it = m.find(key);
        // inside the for (int key : v) loop keep:
        ++it->second;

        // after the loops (to print the key whose mapped value is largest):
        int bestKey = 0;
        int bestVal = -1;
        for (const auto &p : m) {
            if (p.second > bestVal) {
                bestVal = p.second;
                bestKey = p.first;
            }
        }
        cout << "key with highest value: " << bestKey << " (value=" << bestVal << ")" << endl;
    }

    for (const auto &p : m) {
        cout << p.first << " -> " << p.second << endl;
    }
    return 0;
}