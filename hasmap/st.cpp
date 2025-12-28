#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> m;
    int maxLen = 0;
    int left = 0;
    for (int right = 0; right < s.length(); right++) {
        if (m.find(s[right]) != m.end() && m[s[right]] >= left) {
            left = m[s[right]] + 1;
        }
        m[s[right]] = right;
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

int main(){
    string str = "pwwkew";
    cout << lengthOfLongestSubstring(str) << endl;
    return 0;
}