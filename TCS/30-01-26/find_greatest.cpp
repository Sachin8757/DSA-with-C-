#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int st,nd,rd;
    int greter=INT_MIN;
    cout<<"enter 3 Number"<<endl;
    cin>>st>>nd>>rd;
    if(greter<=st){
        greter=st;
    }
    if(greter<=nd){
        greter=nd;
    }
    if(greter<=rd){
        greter=rd;
    }

    cout<<"The greter Number is :"<<greter<<endl;

    return 0;
}