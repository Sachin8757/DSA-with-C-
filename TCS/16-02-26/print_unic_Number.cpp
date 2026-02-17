// 🔹 Coding Question 7: Remove Duplicates from Sorted Array
// 🧩 Problem Statement

// Given a sorted integer array nums, remove the duplicates in-place such that each element appears only once.

// Return the number of unique elements, and print the array after removal (first k elements).

// 📌 Example 1

// Input:

// nums = [1,1,2,2,3,3,3,4]


// Output:

// 4
// Array: [1,2,3,4]

// 📌 Example 2

// Input:

// nums = [1,1,1]


// Output:

// 1
// Array: [1]

// 📌 Example 3

// Input:

// nums = [1]


// Output:

// 1
// Array: [1]

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int test;
    cin >> test;

    while(test--) {
        int s;
        cin >> s;

        vector<int> nums(s);
        for(int i = 0; i < s; i++) {
            cin >> nums[i];
        }

        if(s == 0) {
            cout << 0 << endl;
            continue;
        }

        int k = 1;  // index for unique elements

        for(int i = 1; i < s; i++) {
            if(nums[i] != nums[i - 1]) {
                nums[k++] = nums[i];
            }
        }

        // print array after removal
        for(int i = 0; i < k; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;
    }

    return 0;
}