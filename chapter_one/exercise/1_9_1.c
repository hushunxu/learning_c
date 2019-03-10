#include <stdio.h>

#define NOBLANK 'a'

//将输入复制到输出，并将其中连续的多个空格用一个空格代替
int main()
{
	int c, lastc;

	lastc = NOBLANK;
	while ((c = getchar()) != EOF) {
		if (c != ' ')
		{
			putchar(c);
		} else if (lastc != ' '){
			putchar(c);
		}
		lastc = c;
	}
}