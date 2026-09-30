#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";
    char* prefix = (char*)malloc(200 * sizeof(char));
    strcpy(prefix, strs[0]);
    
    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (prefix[j] && strs[i][j] && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix[j] = '\0';
        if (j == 0) return prefix;
    }
    return prefix;
}

int main() {
    char* strs1[] = {"flower", "flow", "flight"};
    char* res1 = longestCommonPrefix(strs1, 3);
    printf("Test 1 (Typical): %s\n", res1); // Expected: fl
    free(res1);

    char* strs2[] = {"dog", "racecar", "car"};
    char* res2 = longestCommonPrefix(strs2, 3);
    printf("Test 2 (Edge - No Prefix): '%s'\n", res2); // Expected: ''
    free(res2);
    return 0;
}