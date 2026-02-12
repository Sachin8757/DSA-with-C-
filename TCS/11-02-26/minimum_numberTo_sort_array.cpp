// 🧠 Question:

// Given an array, find the minimum number of rotations required to sort the array in increasing order.

// If it cannot be sorted by rotation, return -1.

// 🧾 Example 1
// Input:  [3,4,5,1,2]
// Output: 3


// Explanation:

// Rotate left 3 times:

// [1,2,3,4,5]

// 🧾 Example 2
// Input:  [2,1,3,4]
// Output: -1


// Because no rotation can make it fully sorted.

// 🧾 Example 3
// Input:  [1,2,3,4,5]
// Output: 0


// Already sorted.

#include<iostream>
#include<vector>
using namespace std;

int minRotationsToSort(vector<int>& nums) {

    int n = nums.size();
    int count = 0;
    int index = -1;

    for(int i = 0; i < n; i++) {
        if(nums[i] > nums[(i+1) % n]) {
            count++;
            index = i;
        }
    }

    if(count == 0)
        return 0;

    if(count == 1)
        return index + 1;

    return -1;
}

int main(){
    vector<int>nums={3,4,5,1,2};
    cout<<minRotationsToSort(nums)<<endl;
    return 0;
}