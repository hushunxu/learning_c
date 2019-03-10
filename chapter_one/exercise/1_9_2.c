#include <stdio.h>

#define NOBLANK  'a'

//将输入复制到输出，连续空格用一个代替
int main()
{
	int c, lastc;

	lastc = NOBLANK;
	while ((c = getchar()) != EOF) {
		//不为空，直接复制
		if (c != ' ')
		{
			putchar(c);
		}

		//为空，判断是连续空格，还是单个空格。通过判断上一个输入是否空格来实现。
		if (c == ' ')
		{
			if (lastc != ' ')
			{
				putchar(c);
			}
		}
		lastc = c;
	} 
}
