#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>nums={1,2,2,3,4,4,5};
    vector<int>ans;
    ans.push_back(nums[0]);
    for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[i-1]){
            ans.push_back(nums[i]);
        }
    }

    for(auto a:ans){
        cout<<a<<" ";
    }

    return 0;
}