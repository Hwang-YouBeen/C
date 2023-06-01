#include<stdio.h>
#define numRows 128
#define numCols 128

int findMaxSum(int matrix[numRows][numCols]);
int kadane(int temp[], int row);
int maxInArray(int temp[], int row);

int main() {
    int num;
    int matrix[numRows][numCols] = { 0 };

    printf("N*N enter the number N: ");
    scanf_s("%d", &num);

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            scanf_s("%d", &matrix[i][j]);
        }
    }
    printf("%d\n", findMaxSum(matrix));
    return 0;
}

int findMaxSum(int matrix[numRows][numCols]) { //���� ���� ū ����
    int maxSum = matrix[0][0];
    for (int left = 0; left < numCols; left++) { // ���ʿ� ����
        int temp[numRows] = { 0 };
        for (int right = left; right < numCols; right++) { // �����ʿ� ����
            for (int i = 0; i < numRows; i++) { // ���õ� �͵� ������ ��
                temp[i] += matrix[i][right];
            }
            int max = kadane(temp, numRows); // ���õ� �͵� ������ �տ����� ī���� �˰��� ���
            if (max > maxSum) {
                maxSum = max;
            }
        }
    }
    return maxSum;
}

int kadane(int temp[], int row) { //ī���� �˰��� : 1���� �迭���� �ִ� �κ����� ã��
    //�򰥸��� �о�� => https://sustainable-dev.tistory.com/23
    int maxSum = temp[0];
    int currMax = temp[0]; //����

    for (int i = 1; i < row; i++) {
        currMax = maxInArray(temp, i, currMax + temp[i]);
        if (currMax > maxSum) {
            maxSum = currMax;
        }
    }
    return maxSum;
}

int maxInArray(int temp[], int row, int currentMax) { // �� �� �߿� �� ū���� ��ȯ��Ű�� �Լ�
    if (temp[row] > currentMax) {
        return temp[row];
    }
    else {
        return currentMax;
    }
}
