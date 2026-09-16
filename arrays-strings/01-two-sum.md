## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

We use two loops to check every pair of numbers in the array.
If the sum of two numbers is equal to the target, we return their indices.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

We should not use the same element twice.
The indices of the two numbers can be returned in any order.