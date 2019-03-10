#include <stdio.h>

#define IN 1 //在单词内
#define OUT 0//在单词内

//编写函数，统计行数、单词数（不包括空格、制表符或换行符）、字符数
int main()
{
	int c, nl, nw, nc, state;

	state = OUT;//初始状态标记为单词外
	nl = nw = nc = 0;//赋值结合次序由右向左，等价于nl = (nw = (nc = 0))

	while ((c = getchar()) != EOF) 
	{
		//字符数，getchar(c)
		++nc;

		//行数，\n
		if (c == '\n')
		{
			++nl;
		}

		//单词数，声明一个初始变量表示在单词外，当遇到空格、制表符或者换行符的时候+1
		if (c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT;
		} else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}