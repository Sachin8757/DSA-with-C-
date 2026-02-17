// Coding Question 6: Check if Array is Sorted and Rotated
// 🧩 Problem Statement

// Given an array nums, determine whether it is sorted (non-decreasing) and rotated.

// Return true if it is sorted and rotated at least once, otherwise false.

// 📌 Explanation

// An array is sorted and rotated if:

// It was originally sorted in non-decreasing order

// Then rotated some number of times (possibly 0 or more)

// 📌 Example 1

// Input:

// [3,4,5,1,2]


// Output:

// true

// 📌 Example 2

// Input:

// [1,2,3,4,5]


// Output:

// true


// (0 rotations is allowed)

// 📌 Example 3

// Input:

// [2,1,3,4]


// Output:

// false


#include<iostream>
#include<vector>
using namespace std;

int main() {
    int testcases;
    cin >> testcases;

    while(testcases--) {
        int s;
        cin >> s;

        vector<int> nums(s);
        for(int i = 0; i < s; i++) {
            cin >> nums[i];
        }

        int count = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            if(nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }

        if(count > 1)
            cout << "False" << endl;
        else
            cout << "True" << endl;
    }

    return 0;
}
