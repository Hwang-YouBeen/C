#include <stdio.h>
int main() {
	float meter, feet, inch;

	printf(" \tmeter(s)\r");
	scanf_s("%f", &meter);

	feet = meter * 3.2808;
	inch = (feet - (int)feet) * 12;

	printf("%.2fmeter\n->\b%dfeet(s) %.1finch(es)", meter, (int)feet, inch);
	return 0;
}
