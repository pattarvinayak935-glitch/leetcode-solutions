## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

Used a stack data structure (implemented using a character array). Pushed opening brackets onto the stack. For closing brackets, checked if the stack was empty or if the top of the stack matched the corresponding opening bracket. If matched, popped the stack.

### Complexity

- Time: O(n) — Single pass through the string.
- Space: O(n) — Stack can grow up to the length of the string in the worst case (e.g., all opening brackets).

### Notes

Edge case: An empty string is technically valid, but the function correctly returns `true` for it because `top` remains `-1`. Also handles mismatched brackets like `(]` by returning `false` immediately.
