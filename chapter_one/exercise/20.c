#include <stdio.h>

#define TABINC 8 //每隔TABINC列就出现一个终止符位

//编写程序，将输入中的制表符替换成适当数目的空格，使空格充满到下一个制表符终止的地方
//https://www.oschina.net/question/266642_117784
//http://hant.ask.helplib.com/c/post_5579939
int main()
{
	int c, nb, pos;

	nb = 0;//当前位置到下一个制表符终止的长度
	pos = 1;//当前位置
	while ((c = getchar()) != EOF) {
		if (c == '\t')
		{
			//一个 tab 结束的地方是下一个制表符开始的地方。
			//如果 tab 宽度为 8 个空格的话，你的每一次 tab 结束的地方一定为 8 的倍数。
			//遇到制表符，计算到达下一个制表位需要的空格数nb
			//要增加多少pos取决于pos%TABINC，
			//TABINC为8，如果pos为8，则添加8，
			//如果pos%8为1 (如9，17)，则添加7，
			//如果pos%8为2 (如10，18)，则添加6等等。
			nb = TABINC - (pos - 1) % TABINC;
			while (nb > 0) {
				putchar(' ');
				++pos;
				--nb;
			}
		} else if (c == '\n') {
			//遇到换行符，把pso重新初始化为输入行的第一个字符位置
			putchar(c);
			pos = 1;
		} else {
			//遇到其他字符，递增变量pos的值
			putchar(c);
			++pos;
		}
	}
}