// 🔥 NEXT QUESTION (Ignite / Smart – String)
// 🧠 Question: Reverse Words in a String

// Given a string s, reverse each word individually while keeping the word order same.

// 🧾 Example 1
// Input:  "hello world"
// Output: "olleh dlrow"

// 🧾 Example 2
// Input:  "tcs ignite exam"
// Output: "sct etingi maxe"

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="tcs ignite exam";
    int i=0;
    while(i<str.length()){
        int j=i;
        while(j<str.length() && str[j]!=' '){
            j++;
        }
        int left=i;int right=j-1;
        while(left<right){
            swap(str[left],str[right]);
            left++;
            right--;
        }
        i=j+1;
    }
    cout<<str<<endl;
    return 0;
}