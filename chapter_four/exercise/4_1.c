#include <stdio.h>

//编写函数strrindex(s, t) 返回字符串t在s中最右边出现的位置,如果s中不包含t，返回-1
int main()
{
	char s[] = {'a', 'b', 'c', 'd', 'a', 'b', 'c', '\0'};
	char t[] = {'a', 'b', 'c', '\0'};

	int i, j, k, pos;
	
	pos = -1;
	//外层循环s
	for (i = 0; s[i] != '\0'; i++)
	{
		//内层循环t
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
			;
		if (k > 0 && t[k] == '\0')
		{
			pos = i;
			printf("target:%d\n", pos);
		}
	}
	printf("target%d\n", pos);
	return pos;
}