#include <iostream>
using namespace std;
int main(){
    int sum=0,i,j;
    cin>>i>>j;
    if(i<0||i>j||j>=10000){
        cout<<"Invalid input i&j,j<= j<10000"<<endl;
    }else{
        for(i;i<=j;i++){
            sum +=i;
        }
        cout<<sum<<endl;
    }
    return 0;
}