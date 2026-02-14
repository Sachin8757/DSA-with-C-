#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector<int>nums={1,1,2,2,3,3,3,4};

    int i=1;
    int j=nums.size()-1;

    while(i<=j){
        if(nums[i]==nums[i-1]){
            swap(nums[i],nums[j]);
            nums.pop_back();
            sort(nums.begin(),nums.end());
        }
        i++;
        j--;
    }

    for(int i:nums){
        cout<<i<<" ";
    }
    // cout<<nums.size();
    return 0;
}