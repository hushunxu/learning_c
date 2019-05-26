#include <stdio.h>
#include <string.h>

char reverse(char s[]);

//itoa函数，将数字n转为字符串并保存到s中
int main()
{
	int n = 12345;
	char s[5] = {'\0'};
	char temp;
	int temp1;

	int i, sign;
	if ((sign = n) < 0)
	{
		n = -n;
	}

	i = 0;
	do {
		s[i++] = n % 10 + '0';
		temp = n % 10 + '0';
		temp1 = n % 10;
		printf("n = %d, temp1 = %d, temp = %c\n", n, temp1, temp);
	} while ((n /= 10) > 0);

	if (sign < 0)
	{
		s[i++] = '-';
	}
	
	s[i] = '\0';
	printf("original s = %s\n", s);
	

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