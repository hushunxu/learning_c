#include <stdio.h>

//统计空格、制表符\t、换行符\n

int main()
{
	int c, ns, nt, nl;

	while ((c = getchar() != EOF))
	{
		if (c == ' ')
		{
			++ns;
		}

		if (c == '\t')
		{
			++nt;
		}

		if (c == '\n')
		{
			++nl;
		}

		printf("空格 %d  制表符 %d 换行符 %d", ns, nt, nl);
	} 
}