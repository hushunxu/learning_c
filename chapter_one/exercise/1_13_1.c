#include <stdio.h>

#define MAXHIST 15 //直方图最大长度,太长会换行
#define MAXWORD 11//最大单词数
#define IN 1 //单词内
#define OUT 0//单词外

//打印输入中单词长度的直方图,水平方向
int main()
{
	int c, i, nc, state;
	int len;//直方图长度
	int maxvalue;//最大值
	int ovflow;//超出的单词个数
	int wl[MAXWORD] = {0};//0-11长度的单词默认数量都是0

	state = OUT;
	nc = ovflow = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n')
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
		} else if (state == OUT) {
			//单词开始
			state = IN;
			nc = 1;
		} else {
			//单词内
			++nc;
		}
	}

	//取出最大值
	maxvalue = 0;
	for (i = 0; i < MAXWORD; ++i)
	{
		if (wl[i] > maxvalue) {
			maxvalue = wl[i];
		}
	}

	for (i = 1; i < MAXWORD; ++i) {
		printf("%5d - %5d: ", i, wl[i]);
		if (wl[i] > 0)
		{
			//将单词个数转为* ，计算缩放比例，保证无论结果如何，直方图中最多的“*”的那一条（或者几条），总是MAXHIST这么多。
			if ((len = wl[i] * MAXHIST / maxvalue) <= 0)
			{
				len = 1;
			}
		} else {
			len = 0;
		}

		//打印*
		while (len > 0) {
			putchar('*');
			--len;
		}
		putchar('\n');
	}

	if (ovflow > 0)
	{
		printf("There are %d words >= %d\n", ovflow, MAXWORD);
	}
}