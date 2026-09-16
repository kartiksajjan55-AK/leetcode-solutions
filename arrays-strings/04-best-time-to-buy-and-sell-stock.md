## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

We keep track of the minimum price seen so far.
For each day, we calculate the profit by subtracting the minimum price from the current price.
We update the maximum profit whenever we find a higher profit.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

If the prices keep decreasing, no profitable transaction is possible, so the answer is 0.
We must buy before selling.