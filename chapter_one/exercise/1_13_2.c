#include <stdio.h>

#define MAXHIST 15 //直方图最大长度
#define MAXWORD 11 //单词输入的长度最大为11，即统计输入单词长度1-11的直方图
#define IN 1 //单词内
#define OUT 0 //单词外

//打印输入单词长度的直方图，垂直方向
int main()
{
	int c, i ,j, nc, state;
	int maxvalue;//输入的最大值
	int ovflow;//超出最大长度的个数
	int wl[MAXWORD] = {0};
	state = OUT;

	nc = ovflow = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t')
		{
			//单词外
			state = OUT;
			if (nc > 0)
			{
				if (nc < MAXWORD)
				{
					++wl[nc];
				} else {
					++ovflow;
				}
			}
			nc = 0;
		} else if (state == OUT) {
			//单词开始的地方
			state = IN;
			nc = 1;
		} else {
			++nc;
		}
	}

	//取出最大值
	maxvalue = 0;
	for (i = 1; i < MAXWORD; ++i) {
		if (maxvalue < wl[i])
		{
			maxvalue = wl[i];
		}
	}

	//从最大值开始遍历
	//外循环打印y轴高度 由上往下
	for (i = MAXHIST; i > 0; --i)
	{
		//内循环打印x轴 由左往右 
		for (j = 1; j < MAXWORD; ++j)
		{
			//如果该长度的单词的数量达到这个高度就打印一个*
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
		printf("%4d ", i);
	}

	putchar('\n');

	//打印各个单词长度的个数
	for (i = 1; i < MAXWORD; ++i)
	{
		printf("%4d ", wl[i]);
	}

	putchar('\n');

	if (ovflow > 0)
	{
		printf("There are %d words >= %d\n", ovflow, MAXWORD);
	}
}