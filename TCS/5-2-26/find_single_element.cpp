#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main(){

    vector<int>num={1,1,2,2,3};
    map<int, int> mp;

    // Step 1: count frequency
    for (int x : num) {
        mp[x]++;
    }

    // Step 2: find unique element
    for (auto it : mp) {
        if (it.second == 1) {
            cout << it.first << endl;
        }
    }
    return 0;
}