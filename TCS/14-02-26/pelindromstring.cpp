// 🔥 Question: Check if String is Palindrome (Ignore Case)

// Given a string, check whether it is a palindrome.

// Rules:

// Ignore spaces

// Ignore case

// Do it in O(n) time

// No extra string if possible

// 🧾 Example 1
// Input:  "Madam"
// Output: true

// 🧾 Example 2
// Input:  "A man a plan a canal Panama"
// Output: true

// 🧾 Example 3
// Input:  "hello"
// Output: false

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string str="A man a plan a canal Panama";
    // string str="hello";
    // string str="Madam";

    bool ispelindrom=true;
    int i=0,j=str.length()-1;

    while(i<j){
        if(str[i]==' ') i++;
        if(str[j]==' ')j--; 

        if(tolower(str[i])!=tolower(str[j])) ispelindrom=false; break;
        i++;
        j--;
    }

    if(ispelindrom) cout<<"True"<<endl;
    else cout<<"False"<<endl;

    return 0;
}