#include <stdio.h>
#define max 10

void printPascalTr(int size);
int main() {
    int size;
    printf("Enter Pascal triangle size: ");
    scanf_s("%d", &size);
    printPascalTr(size);
    return 0;
}

void printPascalTr(int size) {
    int PascalTr[max][max];
    int i, j;

    // 파삼 배열 0으로 초기화함
    for (i = 0; i < max; i++) {
        for (j = 0; j < max; j++) {
            PascalTr[i][j] = 0;
        }
    }

    //첫줄이랑 두번째둘 1로 초기화함
    PascalTr[0][0] = 1;
    PascalTr[1][0] = 1;
    PascalTr[1][1] = 1;

    // 남은 삼각형 계산하기
    for (i = 2; i < size; i++) {
        PascalTr[i][0] = 1; // 모든줄의 첫요소는 1로 해야함
        for (j = 1; j <= i; j++) {
            //각 값은 (바로 위에있는것) + (바로위에 있는거의 왼쪽에 있는 것)
            PascalTr[i][j] = PascalTr[i - 1][j - 1] + PascalTr[i - 1][j];
        }
    }

    // 파스칼 삼각형 출력하기
    for (i = 0; i < size; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", PascalTr[i][j]);
        }
        printf("\n");
    }
}
