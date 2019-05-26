#include <string.h>
#include <stdio.h>

//修改itoa函数，使该函数可以接受三个参数，其中，第三个参数为最小字段宽度。为了保证转换后所得结果至少具有第三个参数指定的最小宽度，必要时应在所得结果的左边填充一定的空格。
#define abs(x) ((x) < 0 ? -(x) : (x))
int main()
{
	int n = 23;
	char s[7] = {'\0'};
	int w = 3;

	int i, sign;

	sign = n;
	i = 0;
	do {
		s[i++] = abs(n % 10) + '0';
	} while ((n /= 10) != 0);

	while(i < w)
	{
		s[i++] = ' ';
	}
	s[i] = '\0';

	printf("strlen s =%lu\n", strlen(s));
	printf("init s = %s\n", s);

	int j;
	char c;
	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}

	printf("target s = %s\n", s);
}