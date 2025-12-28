#include<iostream>
using namespace std;

int main(){
    int num=0;
    cout<<"enter numbert";
    cin>>num;

    int rem=0,rev=0;
    while (num>0){
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }  
    cout<<rev<<endl;
    return 0;
}