// Problem Statement: Longest Subarray with Given Sum K

// You are given:

// An integer K

// An integer N (size of array)

// An array of N integers

// Your task is to find the length of the longest contiguous subarray whose sum is exactly K.

// 📥 Input Format

// First line: Integer K

// Second line: Integer N

// Third line: N space-separated integers

// 📤 Output Format

// Print one integer → length of the longest subarray with sum K

// If no such subarray exists, print 0

// 🔎 Constraints

// 1 ≤ N ≤ 10⁵

// −10⁵ ≤ Array elements ≤ 10⁵

// −10⁹ ≤ K ≤ 10⁹

// 🧪 Test Cases
// Test Case 1

// Input

// 5
// 6
// 1 2 3 1 1 1


// Output

// 3


// 👉 Explanation: Subarray [3,1,1] has sum = 5

// Test Case 2

// Input

// 7
// 5
// 2 3 1 2 4


// Output

// 3


// 👉 Subarray [3,1,2]

// Test Case 3

// Input

// 10
// 4
// 1 2 3 4


// Output

// 0

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    int testcase;
    cin>>testcase;
    while(testcase--){
        int k;
        cout<<"size of K"<<endl;
        cin>>k;
        int size;
        cin>>size;
        vector<int>nums(size);

        for(int i=0;i<size;i++){
            cin>>nums[i];
        }

        //main loginc

        int maxlen=0;

        for(int i=0;i<nums.size();i++){
            int currsum=0;
            int curlen=0;
            for(int j=i;j<nums.size();j++){
                currsum += nums[j];
                curlen++;
                if(currsum=k){
                    maxlen=max(curlen,maxlen);
                }
            }
        }

        cout<<maxlen<<endl;
    }
    
    return 0;
}

