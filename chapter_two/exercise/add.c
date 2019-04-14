#include <stdio.h>

int main()
{
	int x = 0;
	int n = 3;

	x = n++;//加号在后，先用，然后自身再加1
	printf("x:%d n:%d\n", x, n);//x 3 n 4

	x = ++n;//加号在前，先加1，然后再使用
	printf("x:%d n:%d\n", x, n);//x 5 n 5
}