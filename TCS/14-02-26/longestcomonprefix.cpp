// 🧠 Question: Longest Common Prefix

// Given an array of strings, find the longest common prefix among them.

// If there is no common prefix, print an empty string "".

// 🧾 Example 1
// Input:  ["flower","flow","flight"]
// Output: "fl"

// 🧾 Example 2
// Input:  ["dog","racecar","car"]
// Output: ""

// 🧾 Example 3
// Input:  ["tcs","tcsignite","tcsion"]
// Output: "tcs"

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){

    vector<string> strs = {"tcs","tcsignite","tcsion"};

    // Edge cases
    if(strs.size() == 0){
        cout << "";
        return 0;
    }

    if(strs.size() == 1){
        cout << strs[0];
        return 0;
    }

    string prefix = strs[0];

    for(int i = 1; i < strs.size(); i++){
        int j = 0;

        while(j < prefix.length() && j < strs[i].length()
              && prefix[j] == strs[i][j]){
            j++;
        }

        prefix = prefix.substr(0, j);

        if(prefix == "")
            break;
    }

    cout << prefix;
    return 0;
}
