#include <stdio.h>

#define IN 1 //单词内
#define OUT 0 //单词外

//以每行一个单词打印其输入
int main()
{
	int c, state;

	state = OUT;
	while ((c = getchar()) != EOF) {
		//c是单词分隔符，且某个单词结束
		if (c == '\n' || c == '\n' || c == '\t')
		{
			//默认是OUT,遇到结束改为IN,IN的时候认为是单词结束
			if (state == IN)
			{
				putchar('\n');
				state = OUT;
			}
		} else if (state == OUT) {
			//单词开头第一个字符
			state = IN;
			putchar(c);
		} else {
			//单词其他字符
			putchar(c);
		}
	}
}