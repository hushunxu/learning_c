#include <stdio.h>

#define STEP 20
#define LOWER 0
#define UPPER 300

//逆序打印温度转换表300-0
int main()
{
	float cel, fahr;
	for (fahr = UPPER; fahr > LOWER; cel = (fahr - 32) / 9 * 5)
	{
		printf("fahr %.2f cel %.2f\n", fahr, cel);
		fahr -= STEP;
	}
}

