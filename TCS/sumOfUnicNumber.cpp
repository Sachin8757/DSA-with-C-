#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int  sumOfUnicNumber(vector<int>&arr){
    sort(arr.begin(),arr.end());
    int sum=0;

    for(int i=0;i<arr.size();i++){

        if(arr[i]!=arr[i+1]){
            sum +=arr[i];
        }
    }
    return sum;
}

int main(){
    //  sumOfUnicNumber
    int test;
    cout<<"enter test case size"<<endl;
    cin>>test;

    while(test>0){
        int size;
        cout<<"enter array size"<<endl;
        cin>>size;
        vector<int>arr(size);
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        int ans=sumOfUnicNumber(arr);
        cout<<ans<<endl;
        test --;
    }

    return 0;
}