#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<"Before swaping"<<"num1:- "<<num1<<"  num2:- "<<num2<<endl;

    swap(num1,num2);

    cout<<"After swaping"<<"num1:- "<<num1<<"  num2:- "<<num2<<endl;
    return 0;
}