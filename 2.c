#include <stdio.h>
#include <stdlib.h>

void clearb() { //입력버퍼 초기화
    while (getchar() != '\n');
}

void wait() {
    printf("Press any key to continue...");
    getchar(); //사용자로부터 키 입력받음.
    clearb(); // 입력 버퍼 초기화
}

int main() {
    double x, y;
    double* px = &x;
    double* py = &y;

    do {
        printf("실수 x, y 입력: ");
        scanf_s("%lf %lf", px, py);
        clearb();

        printf(" x = %.2lf, y = %.2lf, x + y = %.2lf\n", x, y, x + y);

        *px = *px + *py;
        *py = *px - *py;
        *px = *px - *py;

        printf("x와 y 값 교환: x = %lf, y = %lf\n", x, y);

        wait();
    } while (1);

    return 0;
}
