#include <stdio.h>
#include <ctype.h>
//将字符串转为数字aoti

int main()
{
	// char s[] = {'\t', 'n', 'd', ' ', '1', '3', '0', '\0'};
	char s[] = {'\t', '2', '2', '1', '-', '1', '3', '0', '\0'};
	int i, n, sign;

	// printf("init: %s\n", s);

	//跳过空白符
	for (i = 0; isspace(s[i]); i++)
	{
		printf("isspace: %c\n", s[i]);
		;
	}

	// printf("except space:%s\n", s);

	//读取符号
	sign = (s[i] == '-') ? -1 : 1;

	if (s[i] == '+' || s[i] == '-')
	{
		i++;
	}

	printf("tranfer init:%s\n", s);
	// tranfer init:	221-130
	for (n = 0; isdigit(s[i]); i++)
	{
		n = 10 * n + (s[i] - '0');
		printf("i: %d, s[i]:%c, n:%d\n", i, s[i], n);
		// i: 1, s[i]:2, n:2
		// i: 2, s[i]:2, n:22
		// i: 3, s[i]:1, n:221
	}

	printf("%d\n", sign * n);
}