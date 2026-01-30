#include<iostream>
using namespace std;
int main(){
    int ornum;
    cin>>ornum;
    int num=ornum;
    int prev=0;

    while(num>0){
        int rem=num%10;
        prev=prev*10+rem;
        num=num/10;
    }
    if(prev==ornum){
        cout<<"Palindrome NO"<<endl;
    }else{
        cout<<"Not Palindrome No"<<endl;
    }

    return 0;
}