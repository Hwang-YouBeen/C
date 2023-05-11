#include <stdio.h>

int main() {
	float len, width = 0;
	float area, peri =0;

	printf("Enter the len and width : ");
	scanf_s("%f %f", &len, &width);
	area = len * width;
	peri = 2 * len + 2 * width;

	printf(" % f, % f\n", area, peri);

	return 0;
}