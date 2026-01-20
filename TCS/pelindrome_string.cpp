#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(const string& str) {

}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout<<str<<endl;
    string str2;
    for(int i=str.length()-1;i>=0;i--){
        str2.push_back(str[i]);
    }
    cout<<str2<<endl;
    return 0;
}