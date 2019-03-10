#include <stdio.h>

#define LOWER 0
#define UPPER 200
#define STEP 20

//温度转换 F = C * 9 / 5 + 32

int main()
{
	float cel, fahr;

	cel = LOWER;

	while (cel < UPPER)
	{
		//32不写浮点数，也会自动转为浮点数，建议按规范写成浮点数
		fahr = (cel * 9.0) / 5.0 + 32;
		printf("%.3f\t%.3f\n", cel, fahr);
		cel += STEP;
	}
}