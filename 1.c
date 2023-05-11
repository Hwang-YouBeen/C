#include <stdio.h>
void main() {
	int a, b;
	printf("두 개의 정수를 입력하고 Enter>");
	scanf_s("%d %d", &a, &b);

	if (a > b) {
		printf("변수 %d가 큽니다.", a);
	}

	else if (a < b) {
		printf("변수 %d가 큽니다.", b);
	}

	else {
		printf("같은 값을 입력했습니다.");
	}
}