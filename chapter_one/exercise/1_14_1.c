#include <stdio.h>
#include <ctype.h>

#define MAXHIST 15	//柱状图最大高度15
#define MAXCHAR 128 //最多统计128种不同字符的出现频度

//打印输入中各个字符出现频度的直方图
int main()
{
	int c, i;
	int len;//单位长度
	int maxvalue;//cc[]的最大长度
	int cc[MAXCHAR] = {0};//最多统计128种不同字符的出现频度

	//计算字符出现的次数
	while ((c = getchar()) != EOF) {
		if (c < MAXCHAR)
		{
			++cc[c];
		}
	}

	//计算字符出现的最大值
	maxvalue = 0;
	for (i = 0; i < MAXCHAR; ++i)
	{
		if (cc[i] > maxvalue)
		{
			maxvalue = cc[i];
		}
	}

	//字符长度转为可打印的长度
	for (i = 0; i < MAXCHAR; ++i)
	{
		//字符是否可打印，不可打印的不打印
		if (isprint(i))
		{
			printf("%5d - %c - %5d : ", i, i, cc[i]);
		} else {
			printf("%5d - - %5d : ", i, cc[i]);
		}

		//计算缩放比例
		if (cc[i] > 0)
		{
			if ((len = MAXHIST / maxvalue * cc[i]) <= 0)
			{
				len = 1;
			} else {
				len = 0;
			}
		}

		//打印*
		while (len > 0){
			putchar('*');
			--len;
		}
		putchar('\n');
	}		
}