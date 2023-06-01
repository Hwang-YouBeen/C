#include <stdio.h>

double average(double arr[], int size);

int main() {
    double low[] = {-6.1, -4.1, 1.1, 7.3, 12.6, 17.8, 21.8, 22.1, 16.7, 9.8, 2.9, -3.4};
    double high[] = {1.6, 4.1, 10.2, 17.6, 22.8, 26.9, 28.8, 29.5, 25.6, 19.7, 11.5, 4.2};
    double rain[] = {21.6, 23.6, 45.8, 77.0, 102.2, 133.3, 327.9, 348.0, 137.6, 49.3, 53.0, 24.9};

    int size = sizeof(low) / sizeof(low[0]);

    // Æò±Õ¿Âµµ
    double sumTemp = 0;
    for (int i = 0; i < size; i++) {
        sumTemp += (high[i] + low[i]) / 2;
    }
    double averageTemp = sumTemp / size;

    // Æò±Õ °­¼ö·®
    double sumRain = 0.0;
    for (int i = 0; i < size; i++) {
        sumRain += rain[i];
    }
    double averageRain = sumRain / size;

    printf("Æò±Õ ¿Âµµ: %.2f\n", averageTemp);
    printf("Æò±Õ °­¼ö·®: %.2f\n", averageRain);

    return 0;
}
