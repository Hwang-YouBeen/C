#include <stdio.h>
void main() {
	int n, i, j;
	int sum=0;
	printf("1���� n������ �������\n");
	printf("���� n �Է� : ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i ++) {
		for (j = 1; j <= i; j++) {
			sum += 1;
		}
		printf("1���� %d������ ��= %d\n", i, sum);
	}
	return 0;
}