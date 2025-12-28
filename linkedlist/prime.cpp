#include<iostream>
using namespace std;

bool isprime(int num){
    if(num <=0){
        return false;
    }
    for(int i=2;i<num;i++){

        if(num%i==0){
            return true;
        }
    }
    return false;
}
int main(){
    int num=0;
    cout<<"enter numbert";
    cin>>num;
    cout<<isprime(num)<<endl;
    return 0;
}