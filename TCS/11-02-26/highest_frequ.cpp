// Input:  [1,3,2,1,4,1,3,3]
// Output: 1

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){

    vector<int> nums = {1,3,2,1,4,1,3,3};

    if(nums.size() == 0){
        cout << -1;
        return 0;
    }

    unordered_map<int,int> mp;

    int maxFreq = 0;
    int result = nums[0];

    for(auto x : nums){

        mp[x]++;   // increase frequency

        // If new frequency is greater
        if(mp[x] > maxFreq){
            maxFreq = mp[x];
            result = x;
        }
        // If same frequency, choose smaller element
        else if(mp[x] == maxFreq){
            if(x < result){
                result = x;
            }
        }
    }

    cout << result<<" "<<maxFreq << endl;

    return 0;
}
