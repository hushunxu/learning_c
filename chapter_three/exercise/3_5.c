#include <stdio.h>
#include <string.h>

//编写函数，将整数n转换为以b为底的数，并将转换结果以字符串的形式保存到字符串s中。
//例如itob(n, s, 16)把整数n格式化成十六进制整数保存到s中
int main()
{
	int n = 12345;
	char s[5] = {'\0'};
	int b = 10;

	int i, j, sign;
	if ((sign = n) < 0)
	{
		n = -n;
	}
	i = 0;

	do {
		j = n % b;
		s[i++] = (j <= 9) ? j + '0' : j + 'a' - 10;
	} while ((n /= b) > 0);

	if (sign < 0)
	{
		s[i++] = '-';
	}

	s[i] = '\0';

	printf("origin s = %s\n", s);

	char c;
	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}

	printf("target s = %s\n", s);
}