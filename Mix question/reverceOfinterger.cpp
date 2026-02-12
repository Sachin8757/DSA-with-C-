#include <iostream>
using namespace std;
int main(){
    int num=0;
    cout<<"enter number"<<endl;
    cin>>num;
    int rem,newnum=0;
    while (num>0)
    {
        rem=num%10;
        newnum=newnum*10+rem;
        num=num/10;
    }
    cout<<"reverce number ="<<newnum<<endl;
    
    return 0;
}