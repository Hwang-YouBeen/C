#include <stdio.h>
void main() {
	double n, i, j;
	double sum=0;
	printf("1���� n������ n!���\n");
	printf("���� n �Է� : ");
	scanf_s("%lf", &n);

	for (i = 1; i <= n; i++) {
		sum = 1;
		for (j = 2; j <= i; j++) {
			sum *= j;
		}
		printf("%2.lf!=%13.lf\n",i, sum);
	}
	return 0;
}