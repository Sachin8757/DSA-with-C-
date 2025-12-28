#include<iostream>
using namespace std;

bool ispelindrom(int num){
    int rem=0,rev=0;
    int orinum=num;
    while (num>0){
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    if(orinum==rev){
        return true;
    }else{
        return false;
    }

    
}
int main(){
    int num=0;
    cout<<"enter numbert";
    cin>>num;
    cout<<ispelindrom(num)<<endl;
    return 0;
}