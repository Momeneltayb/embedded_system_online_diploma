#include <stdio.h>

int sum100(n) {
    int sum = ((1 + n) * n) / 2;
    return sum;
}

int main() {
	int n = 100 ;
    int sum = sum100(n);

    printf("The sum of numbers from 1 to 100 is %d\n", sum);
    return 0;
}
