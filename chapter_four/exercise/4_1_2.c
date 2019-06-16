#include <stdio.h>
#include <string.h>

//strrindex(s, t), 返回字符串t在s中最右边出现的位置
int main()
{
	char s[] = {'a', 'b', 'c', 'd', 'a', 'b', 'c', '\0'};
	char t[] = {'a', 'b', 'c', '\0'};

	int i, j, k;

	for (i = strlen(s) - strlen(t); i >= 0; i--)
	{
		for (j = 0, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
			;
		if (k > 0 && t[k] == '\0')
		{
			printf("target %d\n", i);
			return i;
		}
	}
}