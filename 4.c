#include <stdio.h>

int main() {
    int input[100];
    int num, i = 0;

    printf("배열에 저장할 정수를 여러 개 입력하세요. 입력을 종료하려면 0을 입력하세요.\n");

    while (1) { //무한루프
        scanf_s("%d", &num);

        if (num == 0) { //0을 입력하면 앱력받기를 멈춤
            break; 
        }

        input[i] = num;
        i++;
    }

    printf("\n------입력된 값------\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", input[j]);
    }
    printf("\n");

    return 0;
}
