#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.length() != t.length()) {
            return false;
        }
        
        int count[26] = {0};
        
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                return false;
            }
        }
        
        return true;
    }
};
int main() {
    Solution s;

    // Test Case 1
    string s1 = "anagram";
    string t1 = "nagaram";

    cout << s.isAnagram(s1, t1) << endl;


    // Test Case 2 - Edge Case
    string s2 = "a";
    string t2 = "b";

    cout << s.isAnagram(s2, t2) << endl;

    return 0;
}