## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

Used a single-pass greedy approach. Kept track of the minimum price seen so far (`minPrice`) and calculated the potential profit for each day. Updated `maxProfit` whenever a higher profit was found.

### Complexity

- Time: O(n) — Only one pass through the prices array.
- Space: O(1) — Only two integer variables used.

### Notes

Edge case: If the prices are strictly decreasing (e.g., `[7, 6, 4, 3, 1]`), no profit can be made, so the function correctly returns 0. This greedy approach is much more efficient than checking every possible buy-sell pair.
