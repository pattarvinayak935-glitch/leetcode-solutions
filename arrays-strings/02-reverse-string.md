## Problem: Reverse String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

Used a two-pointer approach. One pointer starts at the beginning, the other at the end. Swapped the characters and moved the pointers towards the center until they met.

### Complexity

- Time: O(n) — We iterate through half of the string.
- Space: O(1) — Swapped in place without using extra space.

### Notes

Edge case: A string with only one character `["H"]` returns as is. Since the array is modified in-place, no return value is needed.
