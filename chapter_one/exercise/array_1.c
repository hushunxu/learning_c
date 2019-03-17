#include <stdio.h>

//统计各个数字、空白符（空格、制表符和换行符）以及其他所有字符出现的次数
int main()
{
	int i, c, nwhite, nother;
	int ndigit[10] = {0};//数组初值赋值为0

	nwhite = nother = 0;
	while ((c = getchar()) != EOF) {
		//字符数字转为对应的整型数字
		if (c >= '0' || c <= '9')
		{
			++ndigit[c - '0'];
		} else if (c == ' ' || c == '\t' || c ==  '\n') {
			++nwhite;
		} else {
			++nother;
		}
		i++;
	}

	printf("digit = \n");
	for (i = 0; i < 10; ++i)
	{
		printf("%d\n", ndigit[i]);
	}
	
	printf("nwhite = %d, nother = %d\n", nwhite, nother);
}