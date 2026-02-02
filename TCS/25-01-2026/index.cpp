#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include<string>
using namespace std;

// Sum of unic nubmer is a array
int sumOfUnicNumber(vector<int> &nums)
{
    if (nums.size() == 0)
    {
        return nums[0];
    }
    int sum = 0;
    sort(nums.begin(), nums.end());

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {
            sum += nums[i];
        }
    }
    return sum;
}

// find cube A to B
int cube(int a,int b){
    int cube=0;
    for(int i=a;i<=b;i++){
        cube+= i*i*i;
    }
    return cube;
}

// Sum of first 10 multiple
int SumOfFirst10Multiple(int num){
    int sum=0;
    for(int i=1;i<=10;i++){
        sum+=num*i;
    }
    return sum;
}

// largest sum of contiguous subarray 
    int subarraysum(vector<int>&nums){
        int orisum=INT_MIN;

        for(int i=0;i<nums.size();i++){
            int currsum=0;
            for(int j=i;j<nums.size();j++){
                currsum+=nums[j];
                orisum=max(currsum,orisum);
            }
        }
        return orisum;
    }
// print maxvalue from k
    void printmaxvalueofk(vector<int>&nums,int k){

        if(nums.size()<0){
            return ;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=k){
                cout<<nums[i]<<" ";
            }
        }
        cout<<endl;
    }

        // reverse string 
        void reversestring(string st){
            sort(st.begin(),st.end());
            cout<<st<<endl;
        }

        //factorial number
        int facto(int num){
            if(num==0){
                return 0;
            }
            int fact=1;

            for(int i=1;i<=num;i++){
                fact *=i;
            }

            return fact;
        }
// main function
int main()
{
    // Vector for all function
    vector<int> nums = {1, 2, 3, 2, 3, 4, 5, 4};
    // vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};

    // SumOfUnicNumber
    cout << sumOfUnicNumber(nums) << endl;

    // find cube a to b
    int a = 4, b = 9;
    cout<<cube(a,b)<<endl;
    
    //sum of first 10 multiple
    int num=10;
    cout<<SumOfFirst10Multiple(num)<<endl;

    // largest sum of contiguous subarray
    cout<<subarraysum(nums)<<endl;


    // int k=3;
    printmaxvalueofk(nums,k);


    //reverse string
    string st="sachin kumar";
    reversestring(st);

    //factorial 
    int num=3;
   cout<<facto(num)<<endl;

    return 0;
}