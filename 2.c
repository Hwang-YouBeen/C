#include <stdio.h>
#include <stdlib.h>

void clearb() { //�Է¹��� �ʱ�ȭ
    while (getchar() != '\n');
}

void wait() {
    printf("Press any key to continue...");
    getchar(); //����ڷκ��� Ű �Է¹���.
    clearb(); // �Է� ���� �ʱ�ȭ
}

int main() {
    double x, y;
    double* px = &x;
    double* py = &y;

    do {
        printf("�Ǽ� x, y �Է�: ");
        scanf_s("%lf %lf", px, py);
        clearb();

        printf(" x = %.2lf, y = %.2lf, x + y = %.2lf\n", x, y, x + y);

        *px = *px + *py;
        *py = *px - *py;
        *px = *px - *py;

        printf("x�� y �� ��ȯ: x = %lf, y = %lf\n", x, y);

        wait();
    } while (1);

    return 0;
}
