## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

Used a brute-force nested loop approach in C. For each element, I checked the remaining elements for a complement that adds up to the target.

### Complexity

- Time: O(n²) — Nested loops iterate over the array.
- Space: O(1) — Uses constant extra space for the result array.

### Notes

Edge case: Duplicate numbers like `[3, 3]` work correctly because the inner loop starts at `i+1`, avoiding using the same element twice. A more optimal O(n) solution would use a hash map, but C requires a custom hash table implementation.
