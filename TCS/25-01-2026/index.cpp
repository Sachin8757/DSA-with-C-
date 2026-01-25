#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

//Sum of unic nubmer is a array
int sumOfUnicNumber(vector<int>&nums){
    if(nums.size()==0){
        return nums[0];
    }
    int sum=0;
    sort(nums.begin(),nums.end());

    for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[i-1]){
            sum+=nums[i];
        }
    }
    return sum;
}
// main function
int main(){
    //Vector for all function 
    vector<int>nums={1,2,3,2,3,4,5,4};
    cout<<sumOfUnicNumber(nums)<<endl;

return 0;
}