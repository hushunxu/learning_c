#include <stdio.h>

#define TABINC 8 //每隔8列就出现一个终止符 

//将输入的制表符替换为适当数目的空格，使空格充满到下一个制表符终止的地方
int main()
{
	int c, nb, pos;

	nb = 0;
	pos = 1;
	while ((c = getchar()) != EOF) {
		if (c == '\t')
		{
			//遇到换行符，计算空格数量
			//TABINC = 8;
			//pos = 8， 添加8个空格 8 - 8 % 8
			//pos = 9， 添加7个空格 8 - 9 % 8
			//pos = 10，添加6个空格 8 - 10 % 8
			//pos = 11，添加5个空格 8 - 11 % 8
			//pos = 12，添加4个空格 8 - 12 % 8
			//pos = n，添加(pos-1) 8 - (pos-1) % 8
			nb = TABINC - (pos - 1) % TABINC;
			while (nb > 0) {
				putchar(' ');
				++pos;
				--nb;
			}
		} else if (c == '\n') {
			//换行重新赋值为1
			putchar(c);
			pos = 1;
		} else {
			//其他,++
			putchar(c);
			++pos;
		}
	}
}