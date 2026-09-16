## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

We count the frequency of each letter in both strings.
If the strings have the same letters with the same frequency, they are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The input contains lowercase English letters.
We use an array of size 26 to store the frequency of each letter.