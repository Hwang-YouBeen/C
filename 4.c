#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int ave, sum = 0;
    int student[30], i;

    printf("Get scores of 10 students\n");

    for (i = 0; i < 10; i++) { //10명 점수 입력받기
        printf("student %d: ", i + 1);
        scanf_s("%d", &student[i]);
        sum += student[i];
    }

    srand(time(NULL)); // 20명 점수 랜덤하게 생성하기
    for (i = 10; i < 30; i++) {
        student[i] = rand() % 101; // 점수는 0이랑 100사이
        sum += student[i];
    }

    ave = sum / 30; //평균계산식

    printf("\n*****Student's Random score*****\n");
    for (i = 10; i < 30; i++) {
        printf("Student %d: %d\n", i + 1, student[i]);
    }

    printf("\nAverage Score: %d\n", ave);

    return 0;
}
