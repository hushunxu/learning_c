#include <stdio.h>
#include <ctype.h>

#define MAXHIST 15 //柱状图的最大长度
#define MAXCHAR 128	//统计的最大不同字符数

//打印输入中各个字符出现频度的直方图
int main()
{
	int c, i;
	int len;
	int maxvalue; //最大数
	int cc[MAXCHAR];//字符计数器数组

	//不同字符数数量统计为0
	for (i = 0; i < MAXCHAR; ++i)
	{
		cc[i] = 0;
	}


	while ((c = getchar()) != EOF) {
		if (c < MAXCHAR)
		{
			++cc[c];
		}
	}

	//取出最大值
	maxvalue = 0;
	for (i = 0; i < MAXCHAR; ++i)
	{
		if (cc[i] > maxvalue)
		{
			maxvalue = cc[i];
		}
	}

	for (i = 0; i < MAXCHAR; ++i)
	{
		//isprint(c) 判断一个字符是否为打印字符，如果c为可打印，返回非0值，否则返回0
		if (isprint(i))
		{
			printf("%5d - %c - %5d : ", i, i, cc[i]);
		} else {
			printf("%5d -  - %5d : ", i, cc[i]);
		}

		//字符数量转换为直方图单位长度
		if (cc[i] > 0)
		{
			if ((len = cc[i] * MAXHIST / maxvalue) <= 0)
			{
				len = 1;
			}
		} else {
			len = 0;
		}

		//打印*
		while (len > 0)
		{
			putchar('*');
			--len;
		}

		putchar('\n');

	}
}
