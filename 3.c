#include <stdio.h>
#include <stdlib.h>

int tosscoin()
{
    return rand() % 2;
}

#include <time.h>

int main(void){
    int i;
    int headcount = 0; //�ո� ī��Ʈ �ʱ�ȭ
    int tailcount = 0; //�޸� ī��Ʈ �ʱ�ȭ

    srand((unsigned)time(NULL)); // ����ð����� ���� �����⸦ �ʱ�ȭ

    for (i = 0; i < 100; i++)
    {
        int result = tosscoin();
        if (result == 0)//�޸��̸�
        {
            printf("Tails\n");
            tailcount++;//�޸� ī��Ʈ+
        }
        else // �ո��̸�
        {
            printf("Heads\n");
            headcount++; //�ո� ī��Ʈ+
        }
    }

    printf("Heads count: %d\n", headcount);
    printf("Tails count: %d\n", tailcount);

    return 0;
}
