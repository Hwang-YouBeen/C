#include <stdio.h>
#define PI 3.14159;

int main()
{
	float radius, diameter, circumference, area;
	
	printf("Get radius? ");
	scanf_s("%f", &radius);
	
	diameter = radius * 2;
	circumference = 2 * radius * PI;
	area = radius * radius * PI
	
	printf("diameter = %f, circumference = %f, area = %f", diameter, circumference, area);
	
	return 0;
}
