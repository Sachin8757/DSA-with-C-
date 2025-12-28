#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string s) {
    if (s.empty()) {
        return true;
    }
    int i = 0, j = s.length() - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    string s1 = "racecar";
    string s2 = "hello";
    string s3 = "madam";

    cout << "Is \"" << s1 << "\" a palindrome? " << (isPalindrome(s1) ? "Yes" : "No") << endl;
    cout << "Is \"" << s2 << "\" a palindrome? " << (isPalindrome(s2) ? "Yes" : "No") << endl;
    cout << "Is \"" << s3 << "\" a palindrome? " << (isPalindrome(s3) ? "Yes" : "No") << endl;

    return 0;
}