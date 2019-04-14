#include <stdio.h>

#define YES 1
#define NO 0

//将16进制转为对应的10进制
int main()
{
	int i, c, digit, inhex, n; 

	char s[] = {'0', 'x', '1', 'a', 'f', '5'};

	i = 0;
	//识别是16进制
	if (s[i] == '0')
	{
		++i;
		if (s[i] == 'x' || s[i] == 'X')
		{
			++i;
		}
	}

	n = 0;
	inhex = YES;
	for ( ; inhex == YES; ++i)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
		} else if (s[i] >= 'a' && s[i] <= 'f') {
			digit = s[i] - 'a' + 10;
		} else if (s[i] >= 'A' && s[i] <= 'F') {
			digit = s[i] - 'A' + 10;
		} else {
			inhex = NO;
		}

		if (inhex == YES) {
			n = 16 * n + digit;
		}
	}

	printf("%d\n", n);
}