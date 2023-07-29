#include <stdio.h>

int maxOnesBetweenZeros(int n) {
    int maxOnes = 0;
    int ones = 0;
    int zeroFound = 0;
    while (n != 0) {
        if ((n & 1) == 1) {
            ones++;
        } else {
            if (zeroFound) {
                if (ones > maxOnes) {
                    maxOnes = ones;
                }
                ones = 0;
            } else {
                zeroFound = 1;
            }
        }
        n = n >> 1;
    }
    return maxOnes;
}

int main() {
    int n = 14;
    printf("Binary number: %d\n", n);
    int maxOnes = maxOnesBetweenZeros(n);
    printf("Max ones between two zeros: %d\n", maxOnes);

    n = 110;
    printf("Binary number: %d\n", n);
    maxOnes = maxOnesBetweenZeros(n);
    printf("Max ones between two zeros: %d\n", maxOnes);

    return 0;
}
