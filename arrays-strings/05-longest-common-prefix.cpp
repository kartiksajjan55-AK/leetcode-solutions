#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string prefix = strs[0];
        
        for (int i = 1; i < strs.size(); i++) {
            
            int j = 0;
            
            while (j < prefix.length() &&
                   j < strs[i].length() &&
                   prefix[j] == strs[i][j]) {
                j++;
            }
            
            prefix = prefix.substr(0, j);
        }
        
        return prefix;
    }
};
int main() {
    Solution s;

    // Test Case 1
    vector<string> strs1 = {"flower", "flow", "flight"};

    cout << s.longestCommonPrefix(strs1) << endl;


    // Test Case 2 - Edge Case
    vector<string> strs2 = {"dog", "racecar", "car"};

    cout << s.longestCommonPrefix(strs2) << endl;

    return 0;
}