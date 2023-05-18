#include <stdio.h>

int main() {
    int decimal, octal = 0, i = 1;

    printf("Input one integer number: ");
    scanf_s("%d", &decimal);

    while (decimal != 0) {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }

    printf("Output octal number: %d\n", octal);

    return 0;
}
