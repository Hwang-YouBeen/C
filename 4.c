#include <stdio.h>

int main() {
    int input[100];
    int num, i = 0;

    printf("�迭�� ������ ������ ���� �� �Է��ϼ���. �Է��� �����Ϸ��� 0�� �Է��ϼ���.\n");

    while (1) { //���ѷ���
        scanf_s("%d", &num);

        if (num == 0) { //0�� �Է��ϸ� �۷¹ޱ⸦ ����
            break; 
        }

        input[i] = num;
        i++;
    }

    printf("\n------�Էµ� ��------\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", input[j]);
    }
    printf("\n");

    return 0;
}
