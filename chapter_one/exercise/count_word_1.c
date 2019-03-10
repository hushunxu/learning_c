#include <stdio.h>

#define IN 1 //单词内
#define OUT 0 //单词外，如果是单词外，单词数加1

//统计行数，单词数（不包括空格、制表符或换行符）、字符书
int main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;

	while ((c = getchar()) != EOF) {
		//字符数，getchar(c) != EOF
		++nc;

		//行数，换行符\n
		if (c == '\n')
		{
			++nl;
		}

		//单词数，标识在单词外的+1，之后将标识置为单词内
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