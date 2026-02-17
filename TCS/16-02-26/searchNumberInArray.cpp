// 🔹 Question: Majority Element
// 📌 Problem Statement

// Given an array of size N, find the element that appears more than N/2 times.
// You may assume that the majority element always exists.

// 🧪 Example
// Input:
// 1
// 7
// 2 2 1 1 2 2 2

// Output:
// 2

#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int s;
        cin>>s;
        vector<int>nums(s);
        for(int i=0;i<s;i++)
            cin>>nums[i];

        int count=1;
        int num;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                if(count>=(s/2)){
                    num=nums[i];
                    count=1;
                }else{
                    count=1;
                }
            }
            count++;
            if(count>s/2)
                num=nums[i];
        }
        cout<<num<<endl;

        
    }
    return 0;
}
// #include<iostream>
// #include<vector>
// #include<map>
// using namespace std;
// int main(){
//     int test;
//     cin>>test;
//     while(test--){
//         int s;
//         cin>>s;
//         vector<int>nums(s);
//         for(int i=0;i<s;i++)
//             cin>>nums[i];
//         //work
//         map<int,int>mp;

//         for(int i:nums){
//             mp[i]++;
//         }

//         for(auto i:mp){
//             if(i.second>=(s/2)){
//                 cout<<i.first;
//             }
//         }

        
//     }
//     return 0;
// }