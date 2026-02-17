// 🔹 Coding Question 8: Find Missing Number
// 🧩 Problem Statement

// You are given an array of size n containing distinct numbers taken from the range 0 to n.
// Find the missing number.

// 📌 Example 1

// Input:

// nums = [3,0,1]


// Output:

// 2

// 📌 Example 2

// Input:

// nums = [0,1]


// Output:

// 2

// 📌 Example 3

// Input:

// nums = [9,6,4,2,3,5,7,0,1]


// Output:

// 8


#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int s;
        cin>>s;
        vector<int>nums(s);
        for(int i=0;i<s;i++){
            cin>>nums[i];
        }
        map<int,int>mp;
        //work
        for(int i:nums){
            mp[i]++;
        }

        // find missing number from 0 to n
        for(int i = 0; i <= s; i++) {
            if(mp.find(i) == mp.end()) {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}