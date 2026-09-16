#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int left = 0;
        int right = s.size() - 1;
        
        while (left < right) {
            
            swap(s[left], s[right]);
            
            left++;
            right--;
        }
    }
};
#include <iostream>

int main() {
    Solution s;

    // Test Case 1
    vector<char> str1 = {'h', 'e', 'l', 'l', 'o'};

    s.reverseString(str1);

    for (char c : str1) {
        cout << c << " ";
    }
    cout << endl;


    // Test Case 2 - Edge Case
    vector<char> str2 = {'a'};

    s.reverseString(str2);

    for (char c : str2) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}