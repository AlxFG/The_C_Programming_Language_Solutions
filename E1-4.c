#include <stdio.h>
int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 25;

	celsius = lower;
	while (celsius <=300){
		fahr =celsius/(5.0/9.0)+32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius +step;
	}
}
