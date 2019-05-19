#include <stdio.h>
#include <string.h>

//itoa函数，将数字n转为字符串并保存到s中
int main()
{
	int n = 123;
	char s[] = {'\0'};

	int i, sign;
	if ((sign = n) < 0)
	{
		n = -n;
	}

	i = 0;
	do {
		s[i++] = n % 10 + '0';
		// printf("%s\n", s);
	} while ((n /= 10) > 0);

	if (sign < 0)
	{
		s[i++] = '-';
	}
	
	s[i] = '\0';
	// reverse(s);

	printf("%s\n", s);
}