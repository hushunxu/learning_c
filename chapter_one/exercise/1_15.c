#include <stdio.h>

//编写温度转换程序，用函数实现
float celsius(float fahr);
int main()
{
	float fahr;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		printf("%3.0f %6.1f\n", fahr, celsius(fahr));
		fahr += step;
	}
}

float celsius(float fahr)
{
	return (5.0 / 9.0) * (fahr - 32.0);
}
