#include <stdio.h>

//验证getchar() != EOF的值是0还是1

int main()
{
	int c;

	//!= 优先级高于 =  下面表达式等价于c = (getchar() ! EOF)
	while (c = getchar() != EOF)
		printf("%d\n", c);

	printf("%d - at EOF \n", c);
}