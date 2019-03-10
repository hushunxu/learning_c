#include <stdio.h>

//行计数

int main()
{
	int c, nl;

	while ((c = getchar()) != EOF)
	{
		//如果是换行，+1
		if (c == '\n')
		{
			++nl;
		}
	}
	printf("%d\n", nl);
}