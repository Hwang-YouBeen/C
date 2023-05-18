#include <stdio.h>

int geometric(int n);

int main(void) {
    printf("sum = %d\n\n", geometric(10));
    return 0;
}

int geometric(int n) {
    int firstTerm = 2;  
    int ratio = 3;
    int term, sum = 0;

    for (int i = 0; i < n; i++) {
        term = firstTerm;

        for (int j = 0; j < i; j++) {
            term *= ratio;
        }

        printf("an=%d\n", term);
        sum += term;
    }

    printf("\n");

    return sum;
}
