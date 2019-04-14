#include <stdio.h>

//删除字符串s中出现的所有字符c
int main()
{
	char s[] = {'c', 'a', 'c', 'h', '1', '2', '\0'};
	int c = 'c';

	int i, j;
	for (i = j = 0; s[i] != '\0'; ++i)
	{
		if (s[i] != c)
		{
			s[j++] = s[i];
		}
	}
	s[j] = '\0';
	printf("%s\n", s);
}