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

    // �Ļ� �迭 0���� �ʱ�ȭ��
    for (i = 0; i < max; i++) {
        for (j = 0; j < max; j++) {
            PascalTr[i][j] = 0;
        }
    }

    //ù���̶� �ι�°�� 1�� �ʱ�ȭ��
    PascalTr[0][0] = 1;
    PascalTr[1][0] = 1;
    PascalTr[1][1] = 1;

    // ���� �ﰢ�� ����ϱ�
    for (i = 2; i < size; i++) {
        PascalTr[i][0] = 1; // ������� ù��Ҵ� 1�� �ؾ���
        for (j = 1; j <= i; j++) {
            //�� ���� (�ٷ� �����ִ°�) + (�ٷ����� �ִ°��� ���ʿ� �ִ� ��)
            PascalTr[i][j] = PascalTr[i - 1][j - 1] + PascalTr[i - 1][j];
        }
    }

    // �Ľ�Į �ﰢ�� ����ϱ�
    for (i = 0; i < size; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", PascalTr[i][j]);
        }
        printf("\n");
    }
}
