#include <stdio.h>

#define TABINC 8 // 每隔8列出现制表符终止位

//将空格字符串替换为数量最少的制表符和空格，要保持单词之间的间隔不变
int main()
{
	int c, nb, nt, pos;

	nb = 0; //用来替换空格串空格的最少个数
	nt = 0; //用来替换空格串制表符的的最少个数
	pos = 1; //程序在文本行中的当前位置

	//找出全部空格，再看用制表符还是空格
	//如果只需要一个空格就能到达下一个制表位，选择把它替换为一个制表符
	for (pos = 1; (c = getchar()) != EOF; ++pos)
	{
		if (c == ' ')
		{
			//pos每递增到TABINC的一个倍数时，把空格串替换为一个制表符
			if (pos % TABINC != 0)
			{
				//空格
				++nb;
			} else {
				//\t
				nb = 0;
				++nt;
			}
		} else {
			//遇到非空格字符时，先把这个字符之前的制表符和空格打印出来，再打印这个字符
			for ( ; nt > 0; --nt)
			{
				putchar('\t');
			}

			//遇到制表符时，把此前积累的制表符和当前遇到的这个制表符打印出来
			if (c == '\t')
			{
				nb = 0;
			} else {
				for ( ; nb > 0; --nb)
				{
					putchar(' ');
				}
			}

			putchar(c);
			if (c == '\n')
			{
				//遇到换行符清零
				pos = 0;
			} else if (c == '\t') {
				//计算还有几个位置到达下一个终止位，因为\t已经读进去了，需要减掉
				pos = pos + (TABINC - (pos - 1) % TABINC) - 1;
			}
		}
	}	
}

