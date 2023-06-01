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

int findMaxSum(int matrix[numRows][numCols]) { //합이 가장 큰 서매
    int maxSum = matrix[0][0];
    for (int left = 0; left < numCols; left++) { // 왼쪽열 선택
        int temp[numRows] = { 0 };
        for (int right = left; right < numCols; right++) { // 오른쪽열 선택
            for (int i = 0; i < numRows; i++) { // 선택된 것들 사이의 합
                temp[i] += matrix[i][right];
            }
            int max = kadane(temp, numRows); // 선택된 것들 사이의 합에대해 카데인 알고리즘 사용
            if (max > maxSum) {
                maxSum = max;
            }
        }
    }
    return maxSum;
}

int kadane(int temp[], int row) { //카데인 알고리즘 : 1차원 배열에서 최대 부분합을 찾음
    //헷갈릴때 읽어보기 => https://sustainable-dev.tistory.com/23
    int maxSum = temp[0];
    int currMax = temp[0]; //현재

    for (int i = 1; i < row; i++) {
        currMax = maxInArray(temp, i, currMax + temp[i]);
        if (currMax > maxSum) {
            maxSum = currMax;
        }
    }
    return maxSum;
}

int maxInArray(int temp[], int row, int currentMax) { // 두 수 중에 더 큰값을 반환시키는 함수
    if (temp[row] > currentMax) {
        return temp[row];
    }
    else {
        return currentMax;
    }
}
