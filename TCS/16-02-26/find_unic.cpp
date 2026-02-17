// 🔹 Question: Find the Single Element

// Problem Statement:
// Given an array where every element appears twice except one, find that single number.

// 📌 Example
// Input:
// 1
// 5
// 2 3 5 3 2

// Output:
// 5

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

        map<int ,int>mp;

        for(int i:nums){
            mp[i]++;
        }

        for(auto i:mp){
            if(i.second<=1){
                cout<<i.first<<endl;
            }
        }
    }

    return 0;
}