#include <stdio.h>

int main() {
    int day, hour, minute, second;

    printf("day: ");
    scanf_s("%d", &day);
    printf("hour: ");
    scanf_s("%d", &hour);
    printf("minute: ");
    scanf_s("%d", &minute);
    printf("second: ");
    scanf_s("%d", &second);

    printf("==========result=========\n");

    // 입력값을 초로 환산
    int totalsec = day * 24 * 60 * 60 + hour * 60 * 60 + minute * 60 + second;

    // 일, 시간, 분, 초로 계산
    int days = totalsec / (24 * 60 * 60);
    int remainsec = totalsec % (24 * 60 * 60);
    int hours = remainsec / (60 * 60);
    remainsec %= (60 * 60);
    int minutes = remainsec / 60;
    int seconds = remainsec % 60;

    //day-minute-second
    printf("%d day(s) %d hour(s) %d minute(s) %d second(s)\n", days, hours, minutes, seconds);

    // hour-minute-second
    int totalmin = (day * 24 * 60) + (hour * 60) + minute;
    printf("%d hour(s) %d minute(s) %d second(s)\n", totalmin / 60, totalmin % 60 + second / 60, second % 60);

    // minute-second
    printf("%d minute(s) %d second(s)\n", totalsec/60, totalsec % 60);

    // second
    printf("%d second(s)\n", totalsec);

    return 0;
}
