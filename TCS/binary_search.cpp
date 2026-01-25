#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int binary_search(vector<int>& nums, int tar, int st, int ed) {
    // base case
    if (st > ed) {
        return -1;
    }

    int mid = st + (ed - st) / 2;

    if (nums[mid] == tar) {
        return mid;
    }
    else if (tar < nums[mid]) {
        return binary_search(nums, tar, st, mid - 1);
    }
    else {
        return binary_search(nums, tar, mid + 1, ed);
    }
}

int main(){
    vector<int>nums={1,2,3,4,5,6,7};
    int target=5;

    cout<<binary_search(nums,target,0,nums.size()-1)<<endl;
    return 0;
}