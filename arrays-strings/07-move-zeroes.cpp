#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int index = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            
            if (nums[i] != 0) {
                nums[index] = nums[i];
                index++;
            }
        }
        
        while (index < nums.size()) {
            nums[index] = 0;
            index++;
        }
    }
};
int main() {
    Solution s;

    // Test Case 1
    vector<int> nums1 = {0, 1, 0, 3, 12};

    s.moveZeroes(nums1);

    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;


    // Test Case 2 - Edge Case
    vector<int> nums2 = {0, 0, 1};

    s.moveZeroes(nums2);

    for (int num : nums2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}