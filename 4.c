#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int ave, sum = 0;
    int student[30], i;

    printf("Get scores of 10 students\n");

    for (i = 0; i < 10; i++) { //10�� ���� �Է¹ޱ�
        printf("student %d: ", i + 1);
        scanf_s("%d", &student[i]);
        sum += student[i];
    }

    srand(time(NULL)); // 20�� ���� �����ϰ� �����ϱ�
    for (i = 10; i < 30; i++) {
        student[i] = rand() % 101; // ������ 0�̶� 100����
        sum += student[i];
    }

    ave = sum / 30; //��հ���

    printf("\n*****Student's Random score*****\n");
    for (i = 10; i < 30; i++) {
        printf("Student %d: %d\n", i + 1, student[i]);
    }

    printf("\nAverage Score: %d\n", ave);

    return 0;
}
