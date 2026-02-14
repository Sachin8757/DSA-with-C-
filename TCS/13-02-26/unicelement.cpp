// 🔥 NEXT (Still Easy–Medium, but Trickier)
// 🧠 Question: Remove Duplicates from Sorted Array

// Given a sorted array, remove duplicates in-place such that each element appears only once.

// Return the number of unique elements k.

// The first k elements of the array should contain the result.

// 🧾 Example
// Input:  [1,1,2,2,3,3,3,4]
// Output: k = 4
// Array after operation: [1,2,3,4,_,_,_,_]

// Using extra array

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={1,1,2,2,3,3,3,4};
    vector<int>ans;

    for(int i=0;i<nums.size();i++){
        if(i==0|| nums[i]!=nums[i-1]){
            ans.push_back(nums[i]);
        }
    }

    cout<<ans.size();

    return 0;
}