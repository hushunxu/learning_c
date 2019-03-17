#include <stdio.h>

#define MAXHIST 15
#define MAXWORD 11

//打印输入单词长度的直方图，垂直方向
int main()
{
	int i, j, maxvalue;
	int wl[MAXWORD];
	
	maxvalue = 10;

	for (i = 0; i < MAXWORD; i++) 
	{
		wl[i] = i;
		printf("wl[%d] : %d\n",i, wl[i]);
	}


	//外循环打印y轴高度 由上往下
	for (i = MAXHIST; i > 0; --i)
	{
		//内循环打印x轴 由左往右 
		//单词长度	高度
		//10		15
		//9			13	1.5*9
		//8			12	1.5*8
		//7			10	1.5*7
		//6			9	1.5*6
		//5			7	1.5*5
		//4			6	1.5*4
		//3			4	1.5*3
		//2			3	1.5*2
		//1			1	1.5*1	
		for (j = 1; j < MAXWORD; ++j)
		{
			//如果该长度的单词的数量达到这个高度就打印两个*
			if (wl[j] * MAXHIST / maxvalue >= i)
			{
				printf("**  ");
			} else {
				printf("    ");
			}
		}
		putchar('\n');
	}

	//打印单词的长度
	for (i = 1; i < MAXWORD; ++i)
	{
		printf("%-4d", i);
	}

	putchar('\n');

	//打印各个单词长度的个数
	for (i = 1; i < MAXWORD; ++i)
	{
		printf("%-4d", wl[i]);
	}

	putchar('\n');
}