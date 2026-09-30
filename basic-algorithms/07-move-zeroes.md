## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

Used a two-pointer technique. One pointer iterates through the array, while the other (`insertPos`) tracks where the next non-zero element should go. After placing all non-zero elements, the remaining slots were filled with zeroes.

### Complexity

- Time: O(n) — Two passes through the array in the worst case.
- Space: O(1) — Modified the array in-place without extra space.

### Notes

Edge case: An array of all zeroes, or an array with no zeroes, both work correctly. This in-place approach is optimal and avoids creating a new array.
