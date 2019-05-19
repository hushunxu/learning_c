#include <stdio.h>
#include <string.h>

//reverse函数，倒置字符串s中各个字符的位置
int main()
{
	char s[] = {'s', 'h', 'u', 'n', '\0'};
	int i, j, c;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}

	printf("%s\n", s);
}