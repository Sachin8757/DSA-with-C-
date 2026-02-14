#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    vector<int>nums={5,3,9,1,7};
    int ans=INT_MIN;

    for(int i=0;i<nums.size();i++){
        if(ans<=nums[i]){
            ans=nums[i];
        }
    }
    cout<<ans;

}