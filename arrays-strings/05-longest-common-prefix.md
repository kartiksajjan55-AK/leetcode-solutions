## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

We take the first string as the initial prefix.
Then we compare it with each remaining string and keep only the characters that are common at the beginning.

### Complexity

- Time: O(n × m)
- Space: O(m)

### Notes

If there is no common prefix, the function returns an empty string.
The prefix becomes shorter whenever the current string does not match it completely.