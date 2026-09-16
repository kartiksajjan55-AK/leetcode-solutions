## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

We move all non-zero elements to the beginning of the array while maintaining their original order.
After placing all non-zero elements, we fill the remaining positions with zeroes.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The array is modified in-place.
The relative order of the non-zero elements is preserved.