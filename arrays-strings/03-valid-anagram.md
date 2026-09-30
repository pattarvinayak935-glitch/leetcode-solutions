## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

Used a frequency array of size 26 to count characters. First, checked if the lengths of both strings are equal. Then, incremented the count for each character in string `s` and decremented it for string `t`. If all counts return to zero, the strings are anagrams.

### Complexity

- Time: O(n) — We iterate through the strings once to update the frequency array, and then loop through the fixed 26-element array.
- Space: O(1) — The frequency array has a fixed size of 26, regardless of input size.

### Notes

Edge case: Strings of different lengths (like `rat` and `car`) are immediately rejected, saving unnecessary computation. This approach relies on the problem constraint that the strings only contain lowercase English letters.
