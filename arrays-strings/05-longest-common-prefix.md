## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

Used horizontal scanning. Assumed the first string is the prefix, then iterated through the remaining strings. For each string, checked character by character and shortened the prefix until a match was found.

### Complexity

- Time: O(S) where S is the sum of all characters in all strings.
- Space: O(1) — Only a single prefix array was allocated.

### Notes

Edge case: If the array contains an empty string or no common prefix exists, the prefix is shortened to an empty string early. Using `malloc` in C requires the caller to `free` the memory.
