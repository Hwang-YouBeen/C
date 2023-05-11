#include <stdio.h>

int main() {
    float meter, inch;
    int feet;

    printf("    meters\r");
    scanf_s("%f", &meter);

    // meter->feet
    float feetFloat = meter * 3.2808;
    feet = (int)feetFloat; 

    //feet->inches
    inch = (feetFloat - feet) * 12;

    printf("-> %dfeet(s) %.1finch(es)\n", feet, inch);

    return 0;
}
