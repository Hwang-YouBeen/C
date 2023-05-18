#include <stdio.h>
#include <math.h>

void calculater(int a, int b, int c);

int main() {
    int a, b, c;

    printf("Enter the values of a, b, c separated by space : ");
    scanf_s("%d %d %d", &a, &b, &c);

    calculater(a, b, c);

    return 0;
}

void calculater(int a, int b, int c) {
    double discriminant = b * b - 4 * a * c; // discriminant=ÆÇº°½Ä!

    if (a == 0 && b == 0) {
        printf("No Solution\n");
    }
    else if (a == 0) {
        double root = -c / (double)b;
        printf("One Root: %.2lf\n", root);
    }
    else if (discriminant < 0) {
        printf("No Root\n");
    }
    else {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The equation has two roots: x1 = %.2lf x2 = %.2lf\n", root1, root2);
    }
}
