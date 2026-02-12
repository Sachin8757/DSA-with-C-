#include<iostream>
#include<vector>
using namespace std;

//recursion function
int sum_array(vector<int>&nums,int n){
    if(n==nums.size())
        return 0;

    return nums[n]+sum_array(nums,n+1);
}

int main(){
    vector<int>nums={1,2,4,5,4,6};
    int sum=sum_array(nums,0);

    cout<<sum<<endl;
    return 0;
}