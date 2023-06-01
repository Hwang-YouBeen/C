버블정렬
#include <stdio.h>
#define N 10

void selectionSort(int A[], int size) {
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key) { // a[]에서 key 보다 큰 것들을 오른쪽으로 한칸씩 옮김
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = key;
    }
}

int main() {
    int i;
    int a[N];

    printf("Enter 10 integers : ");
    for (i = 0; i < 10; i++) {
        scanf_s("%d", &a[i]);
    }
    selectionSort(a, N);

    for (i = 0; i < N; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
