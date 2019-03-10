#include <stdio.h>

#define LOWER 0
#define UPPER 200
#define STEP 20

//温度转换 C = (5 / 9) * (F - 32)

int main()
{
	int cel, fahr;

	fahr = LOWER;

	printf("%s\t\n", "温度转换表");
	while (fahr < UPPER)
	{
		cel = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, cel);
		fahr += STEP;
	}
}