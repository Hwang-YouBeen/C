#include <stdio.h>

int main() {
	int a, b, c, d;
	
	printf("input 2 integers = ");
	c = scanf_s("%d %d",&a,&b);
	d = printf("'a' = %d, 'b' = %d, 'c' = %d\n", a, b, c);

	printf("d = %d", d);

	return 0;
}