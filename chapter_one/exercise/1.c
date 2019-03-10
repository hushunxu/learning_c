#include <stdio.h>

#define LOWER 0 //最低值
#define UPPER 200//最高值
#define SETP 20//步长

//温度转换 C = (5 / 9) * (F -32)

int main()
{
	int cel, fahr;

	fahr = LOWER;
	while (fahr < UPPER)
	{
		cel = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", cel, fahr);
		fahr += SETP;
	}
}