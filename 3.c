#include <stdio.h>
void main() {
	double n, i, j;
	double sum=0;
	printf("1부터 n까지의 n!계산\n");
	printf("정수 n 입력 : ");
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