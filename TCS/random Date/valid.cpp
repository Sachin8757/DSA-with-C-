#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int num=0,num2=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='*'){
            num++;
        }
        else if(str[i]=='#'){
            num2++;
        }
    }
    if(num>num2){
        cout<<num-num2<<endl;
    }else if(num2>num){
        cout<<num-num2<<endl;
    }else{
        cout<<num-num2<<endl;
    }   
    return 0;
}