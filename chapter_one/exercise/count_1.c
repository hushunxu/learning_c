#include <stdio.h>

//字符计数

int main()
{
	long nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;

	printf("%ld\n", nc);
}