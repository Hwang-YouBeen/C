#include <stdio.h>
void main() {
	int a, b;
	printf("�� ���� ������ �Է��ϰ� Enter>");
	scanf_s("%d %d", &a, &b);

	if (a > b) {
		printf("���� %d�� Ů�ϴ�.", a);
	}

	else if (a < b) {
		printf("���� %d�� Ů�ϴ�.", b);
	}

	else {
		printf("���� ���� �Է��߽��ϴ�.");
	}
}