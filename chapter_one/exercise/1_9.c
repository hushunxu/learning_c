#include <stdio.h>

//编写一个将输入复制到输出的程序，并将其中连续的多个空格用一个空格代替

#define NOBLANK 'a'//初始化为空字符串

int main()
{
	int c, lastc;

	lastc = NOBLANK;
	while ((c = getchar()) != EOF)
	{
		//不是空格，复制到输出
		if (c != ' ')
		{
			putchar(c);
		}

		//是空格
		if (c == ' ')
		{
			//判断是单个空格，还是连续空格的第一个空格。如果是单个空格，即上一个不是空格，复制到输出；如果是连续空格，即上一个也是空格，不复制。
			//如果前一个输入不是空格且当前为空格，复制到输出；如果上一个输入是空格且当前为空格，连续空格，不复制
			if (lastc != ' ')
			{
				putchar(c);
			}
		}

		lastc = c;
	}
}