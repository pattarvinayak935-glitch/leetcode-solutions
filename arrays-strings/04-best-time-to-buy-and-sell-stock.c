#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    int minPrice = 1000000, maxProfit = 0;
    for (int i = 0; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }
    return maxProfit;
}

int main() {
    int prices1[] = {7, 1, 5, 3, 6, 4};
    printf("Test 1 (Typical): %d\n", maxProfit(prices1, 6)); // Expected: 5

    int prices2[] = {7, 6, 4, 3, 1};
    printf("Test 2 (Edge - Decreasing): %d\n", maxProfit(prices2, 5)); // Expected: 0
    return 0;
}