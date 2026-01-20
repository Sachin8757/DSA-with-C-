#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int evensum=0;
    int oddsum=0;

    vector<int> nums={1,2,3,4,5,6};

    for(int i=0;i<nums.size();i++){

        if(nums[i]%2==0){
            evensum +=nums[i];
        }else{
            oddsum +=nums[i];
        }

    }
    cout<<"sum of even number :"<<evensum<<endl<<"sum of odd numbers :"<<oddsum<<endl;


    return 0;
}