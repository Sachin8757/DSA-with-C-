#include <iostream>
#include<vector>
using namespace std;
bool changevet(vector<int>& nums, int target){
    int i=0;
   while (i<nums.size()-1){
    if(nums[i]==target){
        return true;
    }
    i++;
   }
   return false;
   
}
int main(){
    vector<int>vet;
    vet.push_back(1);
    vet.push_back(2);
    vet.push_back(3);
    vet.push_back(4);
    vet.push_back(5);
    int target;
    cout<<"enter target";
    cin>>target;
    cout<<changevet(vet,target)<<endl;
    return 0;
}