#include <stdio.h>
int main(void)
{
	float F, C =0;

	scanf_s("%f", &F);
	C = 5.0 / 9.0 * (F - 32);
	
	printf("%f", C);

	return 0;
}