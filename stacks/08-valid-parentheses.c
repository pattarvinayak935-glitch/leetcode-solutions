#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    int len = strlen(s);
    char stack[len + 1];
    int top = -1;
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++top] = s[i];
        } else {
            if (top == -1) return false;
            char c = stack[top--];
            if (s[i] == ')' && c != '(') return false;
            if (s[i] == '}' && c != '{') return false;
            if (s[i] == ']' && c != '[') return false;
        }
    }
    return top == -1;
}

int main() {
    printf("Test 1 (Typical): %d\n", isValid("()[]{}")); // Expected: 1 (true)
    printf("Test 2 (Edge - Wrong Close): %d\n", isValid("(]"));     // Expected: 0 (false)
    return 0;
}