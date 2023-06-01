#include <stdio.h>
#include <stdlib.h>

int tosscoin()
{
    return rand() % 2;
}

#include <time.h>

int main(void){
    int i;
    int headcount = 0; //앞면 카운트 초기화
    int tailcount = 0; //뒷면 카운트 초기화

    srand((unsigned)time(NULL)); // 현재시간으로 난수 생성기를 초기화

    for (i = 0; i < 100; i++)
    {
        int result = tosscoin();
        if (result == 0)//뒷면이면
        {
            printf("Tails\n");
            tailcount++;//뒷면 카운트+
        }
        else // 앞면이면
        {
            printf("Heads\n");
            headcount++; //앞면 카운트+
        }
    }

    printf("Heads count: %d\n", headcount);
    printf("Tails count: %d\n", tailcount);

    return 0;
}
