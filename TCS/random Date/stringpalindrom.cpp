#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main (){

    string st="heh";
    string st2= st;
    reverse(st2.begin(),st2.end());
    for(int i=0;i<st.length();i++){
        if(st[i]!=st2[i]){
            cout<<"Not palindrom"<<endl;
            break;
        }
    }
    cout<<"palindrom"<<endl;
    return 0;
}