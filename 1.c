#include <stdio.h>

void main() {
    int m = 100, n = 200, dummy;
    int* p = &m;

    dummy = *p; //dummy에 *p값 저장
    *p = *(&n); // *p에는 *(&n)값 저장
    *(&n) = dummy; //*(&n)에는 dummy값 저장

    printf("%d %d\n", m, n);
}
