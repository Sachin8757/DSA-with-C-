// 🔹 Coding Question 3: Move All Zeros to End
// 🧩 Problem Statement

// Given an integer array nums, move all 0’s to the end of the array without changing the relative order of non-zero elements.

// You must do this in-place.

// 📌 Example 1

// Input:

// [0, 1, 0, 3, 12]


// Output:

// [1, 3, 12, 0, 0]

// 📌 Example 2

// Input:

// [1, 2, 3]

// Output:

// [1, 2, 3]


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>nums={0, 1, 0, 3, 12};
    int i=0,j=nums.size()-1;
    while(i<=j){

        if(nums[i]==0 && nums[j]!=0){
            swap(nums[i],nums[j]);
            i++;
            j--;
        } 
        if(nums[i]!=0) i++;
        if(nums[j]==0) j--;
    }

    for(int x:nums){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}