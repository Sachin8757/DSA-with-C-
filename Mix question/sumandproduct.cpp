#include<iostream>
using namespace std;
int main(){
    int arr[]={7,2,5,2,54};
    int size=sizeof(arr)/sizeof(int);
    int sum=0,product=1;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        product *=arr[i];
    }
    cout<<"sum of array ="<<sum<<endl;

    cout<<"product of array ="<<product<<endl;
    return 0;
}