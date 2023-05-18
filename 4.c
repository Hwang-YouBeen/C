#include <stdio.h>

int maxval(int a, int b, int c);
int minval(int a, int b, int c);

int main() {
    int a, b, c;

    printf("enter three integer numbers: ");
    scanf_s("%d %d %d", &a, &b, &c); // 정수 세개 입력받기

    printf("max=%d\n", maxval(a, b, c));
    printf("min=%d\n", minval(a, b, c));

    return 0;
}

int maxval(int a, int b, int c) {
    int max = a;

    if (b > max)
        max = b;
    if (c > max)
        max = c;

    return max;
}

int minval(int a, int b, int c) {
    int min = a;

    if (b < min)
        min = b;
    if (c < min)
        min = c;

    return min;
}
