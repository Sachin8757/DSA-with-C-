// 🧩 Coding Question (TCS Ignite Level)
// Question

// Given an integer array, find the length of the longest subarray with sum = K.

// 📥 Input

// An integer N (size of array)

// An integer K

// N space-separated integers

// 📤 Output

// Print length of the longest subarray whose sum equals K

// 🔎 Example
// Input:
// 7
// 3
// 1 2 1 1 1 1 1

// Output:
// 3


// 👉 Explanation:
// Subarray [1,1,1] has sum = 3 and length = 3 (longest)

// 🧪 Test Cases
// Test Case 1
// Input:
// 5
// 5
// 1 2 3 2 1

// Output:
// 2

// Test Case 2
// Input:
// 6
// 0
// 1 -1 2 -2 3 -3

// Output:
// 6

// Test Case 3
// Input:
// 4
// 7
// 2 2 2 2

// Output:
// 0

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int testcase;
    cin>>testcase;

    while(testcase--){
        cout<<"size of K"<<endl;
        int k;
        cin>>k;

        int size;
        cin>>size;
        vector<int>nums(size);
        for(int i=0;i<size;i++){
            cin>>nums[i];
        }

        //work

        int maxlen=0;
        int currlen=0;
        int currsum=0;
        for(int i=0;i<size;i++){
            currsum+=nums[i];
            currlen++;
            if(currsum<=k){
                maxlen=max(currlen,maxlen);
            }else{
                currlen=0;
                currsum=0;
            }
            currlen++;
        }

        cout<<maxlen;


    }

    return 0;
}