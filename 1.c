#include <stdio.h>

void main() {
    int m = 100, n = 200, dummy;
    int* p = &m;

    dummy = *p; //dummy�� *p�� ����
    *p = *(&n); // *p���� *(&n)�� ����
    *(&n) = dummy; //*(&n)���� dummy�� ����

    printf("%d %d\n", m, n);
}
