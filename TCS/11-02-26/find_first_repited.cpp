// 🧠 Question: Find the First Repeating Element

// Given an array, find the first element that repeats.

// ⚠️ Important:
// Return the element whose first occurrence index is smallest.

// 🧾 Example 1
// Input:  [10,5,3,4,3,5,6]
// Output: 5
#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>nums={10,5,3,4,3,5,6};
    int ans=-1;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]==nums[j]){
                ans=nums[i];
                break;
            }
        }
        if(ans!=-1){
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}