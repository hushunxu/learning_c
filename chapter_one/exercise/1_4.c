#include <stdio.h>

#define LOWER 0
#define UPPER 200
#define STEP 20

//温度转换 F = C * 9 / 5 + 32
int main()
{
	float cel, fahr;

	cel = LOWER;
	while (cel <= UPPER)
	{
		fahr = (9.0 * cel) / 5.0 + 32.0;
		printf("%.2f %.2f\n", cel, fahr);
		cel += STEP;
	}
}