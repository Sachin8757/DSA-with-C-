#include <iostream>
using namespace std;
int main(){
    int fac=1,n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        fac=fac*i;
    }
    cout<<"factorial ="<<fac<<endl;
    return 0;
}