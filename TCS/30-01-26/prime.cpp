#include<iostream>
using namespace std;
int main(){

    int num;
    cin>>num;
    bool isprime=true;

    for(int i=2;i*i<num;i++){
        if(num%i==0){
            isprime=false;
        }
    }
    if(isprime){
        cout<<"prime Number"<<endl;
    }else{
        cout<<"Not prime"<<endl;
    }

    return 0;
}