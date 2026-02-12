// 🔹 Question 1 (Array + Frequency Map)

// Given an array, find the first element that appears more than once.

// Example:

// Input:  [4,5,1,2,5,1]
// Output: 5


// If no duplicate → print -1.



#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    // vector<int>nums={5, -2, 3, 4};
    // vector<int>nums={-1, -1, -1, -1};
    vector<int>nums={1, -2, 0, 3};
    map<int,int>mp;

    for(int i=0;i<nums.size();i++){
        if(mp.find(nums[i])!=mp.end()){
        cout<<nums[i];
        break;
        }else{
            mp.inplece({nums[i],0});
        }

    }

    return 0;
}