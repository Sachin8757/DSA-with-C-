#include <iostream>
using namespace std;
int main(){
    int sum=0,n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%3==0){
            sum=sum+i;
        }
    }
    cout<<"sum of number which is divide by 3 ="<<sum<<endl;
    return 0;
}