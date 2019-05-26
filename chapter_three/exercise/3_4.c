#include <stdio.h>
#include <string.h>

#define abs(x) ((x) < 0 ? (-x) : (x))

int main()
{
	int n = -2113;
	int i, sign;
	char s[5] = {'\0'};


	char temp, temp1;

	sign = n;
	i = 0;

	do {
		temp = abs(n % 10);
		temp = abs(n % 10) + '\0';
		s[i++] = abs(n % 10) + '0';
		printf("temp = %c, temp1 = %c\n", temp, temp1);
	} while ((n /=  10) != 0);

	if (sign < 0)
	{
		s[i++] = '-';
	}

	s[i] = '\0';
	printf("origin s = %s\n", s);

	int j, k;
	char c;
	for (j = 0, k = strlen(s) - 1; j < k; j++, k--)
	{
		c =  s[j];
		s[j] = s[k];
		s[k] = c;
	}

	printf("target s = %s\n", s);
}