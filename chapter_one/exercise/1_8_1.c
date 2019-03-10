#include <stdio.h>

//统计空格、制表符、换行符的个数

int main()
{
	int c, nb, nt, nl;

	while ((c = getchar()) != EOF)
	{
		switch(c)
		{
			//空格
			case ' ':
				++nb;
				break;
			//制表符	
			case '\t':
				++nt;
				break;
			//换行符	
			case '\n':
				++nl;
				break;
			default:
				break;			
		}
	}

	printf("空格 %d 制表符 %d 换行符 %d \n", nb, nt, nl);
}