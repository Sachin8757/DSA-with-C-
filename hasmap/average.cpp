#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>arr;
        for(int i=0; i<nums1.size();i++){
            arr.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            arr.push_back(nums2[i]);
        }
    sort(arr.begin(), arr.end());
        int size=arr.size();
        if(size%2==0){
            int num1=(size/2)-1;
            int num2=num1+1;
            double number=arr[num1]+arr[num2];
            return number/2;
        }else{
            int num=(size/2);
            return double(arr[num]);
        }
    }
int main()
{
    vector<int> nums1 = {1,2};
    vector<int> nums2 = {3,4};
    cout<<findMedianSortedArrays(nums1,nums2);
    return 0;
}