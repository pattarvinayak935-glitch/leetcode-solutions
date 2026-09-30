## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

Used the standard two-pointer binary search technique. Maintained `left` and `right` boundaries and calculated the midpoint. Used `left + (right - left) / 2` to prevent integer overflow. Adjusted boundaries based on comparison with the target.

### Complexity

- Time: O(log n) — The search space is halved in each iteration.
- Space: O(1) — Only three integer variables used.

### Notes

Edge case: Target not present in the array returns `-1`. The overflow-safe midpoint calculation is a crucial C detail when working with large arrays.
