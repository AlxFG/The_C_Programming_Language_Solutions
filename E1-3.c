#include <stdio.h>
int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 25;

	fahr = lower;
	printf("fahr  celsius\n");
	while (fahr <=300){
		celsius = (5.0/9.0) * (fahr-32);
		printf("%4.0f %6.1f\n", fahr, celsius);
		fahr = fahr +step;
	}
}
