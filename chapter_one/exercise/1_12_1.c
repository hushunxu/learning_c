#include <stdio.h>

#define IN 1 //单词内
#define OUT 0 //单词外

//以每行一个单词打印其输入
int main()
{
	int c, state;

	state = OUT;//初始化为单词外，遇到单词开始改为单词内，遇到单词结束改为单词外

	while ((c = getchar()) != EOF) {
		//换行符，且state=IN，认为是单词外，输出换行符
		if (c == ' ' || c == '\n' || c == '\t')
		{
			if (state == IN)
			{
				putchar('\n');
			}
		} else if (state == OUT) {
			//单词第一个字母，改为单词内
			state = IN;
			putchar(c);
		} else {
			//单词外
			putchar(c);
		}
	}
}