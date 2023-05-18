#include <stdio.h>

int integerPower(int base, int exponent);

int main() {
    int b, e;

    printf("Input base and exponent: ");
    scanf_s("%d %d", &b, &e); // 밑과 지수 입력받기

    int result = integerPower(b, e);
    printf("%d^%d = %d\n", b, e, result);

    return 0;
}

int integerPower(int base, int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}
