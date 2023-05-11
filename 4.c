#include <stdio.h>
int main(void)
{	
	char g;
	float ma, ca, fc, fs = 0;
	printf("Enter desired grade>");
	scanf_s("%c", &g);
	printf("Enter minimum average required>");
	scanf_s("%f", &ma);
	printf("Enter current average in course>");
	scanf_s("%f", &ca);
	printf("Enter how much the final counts as a percentage\nof the course grade>");
	scanf_s("%f", &fc);
	
	fs = (79.5 - 74.6 * 0.75) / 0.25;

	printf("You need a score of %.2f on the final to get a %c", fs, g);
	return 0;
}