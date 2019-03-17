#include <stdio.h>

//统计各个数字、空白符以及其他字符出现的情况
int main()
{
	int c, i ,nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	//所有数字初值0
	for (i = 0; i < 10; ++i)
	{
		ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9')
		{
			++ndigit[c - '0'];
		} else if (c == ' ' || c == '\n' || c == '\t') {
			++nwhite;
		} else {
			++nother;
		}
	}

	printf("digits = ");
	for (i = 0; i < 10; ++i)
	{
		printf(" %d\n", ndigit[i]);
	}
	printf(", white space = %d, other = %d\n", nwhite, nother);
}