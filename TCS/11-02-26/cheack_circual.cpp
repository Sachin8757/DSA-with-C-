// Array Rotation Check
// Given two arrays A and B of same size,
// check whether B is a rotation of A.
// Return:
// 1 if true
// 0 if false
// 🔹 Example 1
// Input:
// A = [1,2,3,4,5]
// B = [3,4,5,1,2]
// Output:
// 1
// Because B is rotated version of A.
// 🔹 Example 2
// Input:
// A = [1,2,3,4,5]
// B = [4,3,5,1,2]

// Output:
// 0
// Not a rotation.

#include<iostream>
#include<vector>
using namespace std;
bool isrotationequal(vector<int>& a,vector<int>& b){
    if(a.size()>b.size()||a.size()<b.size())
        return false;

    int s=0;
    int e=a.size()-1;
    int mid=s+(e-s)/2;
    int i=0;
    cout<<mid<<endl;
    while(i<b.size()){
        if(mid>=a.size())
            mid=0;
        
        if(a[mid]!=b[i])
            return false;

        i++;
        mid++;
    }
 return true;
}

bool isRotation(vector<int>& a, vector<int>& b) {

    if(a.size() != b.size())
        return false;

    int n = a.size();

    for(int start = 0; start < n; start++) {

        int j = 0;

        while(j < n && a[(start + j) % n] == b[j]) {
            j++;
        }

        if(j == n)
            return true;
    }

    return false;
}

int main(){
    // vector<int>a={1,2,3,4,5};
    // vector<int>b={3,4,5,1,2};

    vector<int>a={1,2,3,4,5};
    vector<int>b={2,3,4,5,1};

    // vector<int>a={1,2,3,4,5};
    // vector<int>b={4,3,5,1,2};

    if(isrotationequal(a,b))  cout<<"True"<<endl;
    else cout<<"False"<<endl;

    return 0;
}