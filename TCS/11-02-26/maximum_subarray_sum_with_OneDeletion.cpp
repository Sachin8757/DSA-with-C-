// 🔹 1. Maximum Subarray Sum with One Deletion

// Level: Medium–High

// Given an array of integers, you can delete at most one element.
// Find the maximum possible subarray sum

// Input:  [1, -2, 0, 3]
// Output: 4
// Explanation: Delete -2 → [1,0,3] → sum = 4

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // vector<int>nums={5, -2, 3, 4};
    // vector<int>nums={-1, -1, -1, -1};
    vector<int>nums={1, -2, 0, 3};
    // vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};

    int maxsum=nums[0];
    int currsum=nums[0];
    for(int i=1;i<nums.size();i++){
        currsum=max(currsum,currsum+nums[i]);
        maxsum=max(maxsum,currsum);
    }

    cout<<maxsum<<endl;

    return 0;
}