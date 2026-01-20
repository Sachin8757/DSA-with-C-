#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="12345";
    string s2="10101";
    string newstr;

    for(int i=0;i<s1.length();i++){
        if(s2[i]!='0'){
            newstr.push_back(s1[i]);
        }
    }
    cout<<newstr<<endl;
    return 0;
}