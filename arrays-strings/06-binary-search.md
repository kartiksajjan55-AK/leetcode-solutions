## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

We use two pointers, left and right, to define the search range.
We check the middle element and eliminate half of the search range each time.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Binary search works because the input array is sorted.
If the target is not found, the function returns -1.