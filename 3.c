#include<stdio.h>
#include<math.h>

int fact(int n);
double compute_e();
double compute_ex(double x);

int main() {
    int a;
    double x;

    printf("a! = ? Enter a: ");
    scanf_s("%d", &a);

    printf("e^x = ? Enter x: ");
    scanf_s("%lf", &x);

    printf("\na! = %d\n", fact(a));
    printf("e = %lf\n", compute_e());
    printf("e^%.lf = %lf\n", x, compute_ex(x));

    return 0;
}

int fact(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

double compute_e() {
    double e = 1.0;
    int i;
    for (i = 1; i <= 8; i++) {
        e += 1.0 / fact(i);
    }
    return e;
}

double compute_ex(double x) {
    double ex = 1.0;
    int i;
    for (i = 1; i <= 8; i++) {
        ex += pow(x, i) / fact(i); //pow -> xÀÇ i½Â °è»ê
    }
    return ex;
}
