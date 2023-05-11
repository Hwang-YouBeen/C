#include <stdio.h>
void main() {
	int n, i, j;
	int sum=0;
	printf("1부터 n까지의 덧셈계산\n");
	printf("정수 n 입력 : ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i ++) {
		for (j = 1; j <= i; j++) {
			sum += 1;
		}
		printf("1부터 %d까지의 합= %d\n", i, sum);
	}
	return 0;
}