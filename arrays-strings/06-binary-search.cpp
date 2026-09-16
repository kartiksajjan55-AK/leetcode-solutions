#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) {
            
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                return mid;
            }
            
            if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        
        return -1;
    }
};
int main() {
    Solution s;

    // Test Case 1
    vector<int> nums1 = {-1, 0, 3, 5, 9, 12};
    int target1 = 9;

    cout << s.search(nums1, target1) << endl;


    // Test Case 2 - Edge Case
    vector<int> nums2 = {-1, 0, 3, 5, 9, 12};
    int target2 = 2;

    cout << s.search(nums2, target2) << endl;

    return 0;
}