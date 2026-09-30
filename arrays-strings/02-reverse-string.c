#include <stdio.h>
#include <string.h>

void reverseString(char* s, int sSize) {
    int left = 0, right = sSize - 1;
    while (left < right) {
        char temp = s[left];
        s[left++] = s[right];
        s[right--] = temp;
    }
}

int main() {
    char s1[] = "hello";
    reverseString(s1, strlen(s1));
    printf("Test 1 (Typical): %s\n", s1); // Expected: olleh

    char s2[] = "H";
    reverseString(s2, strlen(s2));
    printf("Test 2 (Edge - Single): %s\n", s2); // Expected: H
    return 0;
}