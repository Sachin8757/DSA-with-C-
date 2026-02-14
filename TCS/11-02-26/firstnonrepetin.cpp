// // 🧠 Question: First Non-Repeating Element

// // Given an array of integers,
// // find the first element that appears only once.

// // If no such element exists, return -1.

// // 🧾 Example 1
// // Input:  [4,5,1,2,0,4]
// // Output: 5


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={4,5,1,2,0,4};//output must 5;
    // vector<int>nums = {1,2,1,3};//output must 2;
    int ans=-1;
       for(int i = 0; i < nums.size(); i++){

        bool isUnique = true;

        for(int j = 0; j < nums.size(); j++){

            if(i != j && nums[i] == nums[j]){
                isUnique = false;
                break;
            }
        }

        if(isUnique){
            ans = nums[i];
            break;
        }
    }
    cout<<ans;
    return 0;
}