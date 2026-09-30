#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    if (strlen(s) != strlen(t)) return false;
    int count[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) return false;
    }
    return true;
}

int main() {
    printf("Test 1 (Typical): %d\n", isAnagram("anagram", "nagaram")); // Expected: 1 (true)
    printf("Test 2 (Edge - Diff lengths): %d\n", isAnagram("rat", "car")); // Expected: 0 (false)
    return 0;
}