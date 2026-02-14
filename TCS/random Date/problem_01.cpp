#include<iostream>
#include<vector>
#include <algorithm>
#include <climits>
using namespace std;
// question no 1.
void sumOfUnicNumber(vector<int>&arr){
    sort(arr.begin(),arr.end());
    int sum=0;

    for(int i=0;i<arr.size();i++){

        if(arr[i]!=arr[i+1]){
            sum +=arr[i];
        }
    }
    cout<<sum;
}

//find all subarra with a target sum

void findSubarray(vector<int>&arr,int target){
 vector<vector<int>>ans;

 for(int i=0;i<arr.size();i++){
    vector<int>temp;
    int sum=0;
    for(int j=i;j<arr.size();j++){
        sum+=arr[j];

        if(sum==target){
            ans.push_back(temp);
            break;
        }
        if(sum<0 || sum>target){
            break;
        }
        if(sum<=target){
          temp.push_back(arr[j]);
        }
        
    }
    
 }

 for(int i=0;i<arr.size();i++){
    cout<<"[";
    for(int j=i+1;j<arr.size();j++){
       cout<<ans[i][j]<<",";
    }
    cout<<"]"<<endl;
 }

}


// cube of a To b
void cubeOfaTob(int a,int b){
    int sum=0;
    for(a; a<=b;a++){
        sum+=a*a*a;
    }
    cout<<sum;
}


// first 10 multiple
void multiple(int num){
    int sum=0;
    for(int i=1;i<=10;i++){
        sum+=i*num;
    }
    cout<<sum;
}

//Maxnum
void maxnum(vector<int>&arr,int k){
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(arr[i]>=k){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}

// maximum sum of 

void maximumsum(vector<int>& arr) {
    int orsum = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        int currsum = 0;
        for (int j = i; j < arr.size(); j++) {
            currsum += arr[j];
            orsum = max(orsum, currsum);
        }
    }
    cout << orsum << endl;
}




int main(){

    // vector<int>arr1={3,4,-7,1,3,3,1,-4};
    // int target=7;
    // findSubarray(arr1,target);


    // //sumOfUnicNumber
    // vector<int>arr2={1,2,3,2,3,4,5,4};
    // sumOfUnicNumber(arr2);


    // //cube of a To b
    // int a,b;
    // cin>>a>>b;
    // cubeOfaTob(a,b);


    // //first 10 multiple
    // int num;
    // cin>>num;
    // multiple(num);
    // cout<<endl;

    // //print maximum number of k
    // int k;
    // cin>>k;
    // vector<int>arr3={1,3,-1,5,3,6,7};
    // maxnum(arr3,k);

    // maximumsum of subarray
    vector<int>arr4={-2,1,-3,4,-1,2,1,-5,4};
    maximumsum(arr4);
    return 0;
}