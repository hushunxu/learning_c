#include <stdio.h>

//温度转换 C = (5 / 9) * (F - 32)

int main()
{
	//定义华氏温度、摄氏温度
	int fahr, cel;
	//定义步长、底线和上限
	int lower, upper, step;

	step = 20;
	upper = 300;
	lower = 0;
	fahr = lower;
	
	while (fahr <= upper)
	{
		//不能写作(5/9),因为C语言中整数相除会进行舍位，结果中任何小数部分都会被舍弃。5和9都是小数，相除截取后是0
		cel = 5 * (fahr - 32) / 9;
		printf("%d\t %d\n", fahr, cel);
		fahr += step;
	}
}