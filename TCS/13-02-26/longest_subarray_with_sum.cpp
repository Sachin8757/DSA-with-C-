// 🔥 Question: Longest Subarray With Sum = K

// Given an array of integers and a number K,
// find the length of the longest subarray whose sum equals K.

// 🧾 Example 1
// Input:  nums = [1,2,3,1,1,1,1,4,2,3]
// K = 3

// Output: 3

#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>& nums,int sum){
    int ind=0;
     for(int i=0;i<nums.size();i++){
            int currsum=0;
            int currind=0;
        
        for(int j=i;j<nums.size();j++){
            currsum+=nums[j];
            currind++;
            if(currsum>=sum){
                ind=max(currind,ind);
                break;
            }
                
        }
        
     }
    return ind;
}

int main(){
    // vector<int>nums={1,2,3,1,1,1,1,4,2,3};
    vector<int>nums={2,3,5};
    int k=5;

    cout<<solve(nums,k)<<endl;

    return 0;
}