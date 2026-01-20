#include<iostream>
using namespace std;
int main(){
    int num=121;
    int num2=num;
    int rev=0;
    int rem=0;
    while(num2>0){
        rem=num2%10;
        rev=rev*10+rem;
        num2=num2/10;
    }
    if(num==rev)
        cout<<true;
    else
        cout<<false;
    return 0;
}