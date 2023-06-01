#include <stdio.h>
void triangle(int line);

int main() {
    int a;
    printf("input line : ");
    scanf_s("%d", &a);
    triangle(a);
    return 0;
}

void triangle(int line) {
    int i, j, count = 1;
    int space = line - 1; //ºóÄ­

    for (i = 1; i <= line; i++) {
        for (j = 1; j <= space; j++) {
            printf("  ");
        }

        for (j = 1; j <= i; j++) {
            printf("%-2d ", count++);
        }

        printf("\n");
        space--;
    }
}
