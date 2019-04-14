#include <stdio.h>

//将字符串s转换为对应的整型数
int main()
{
	char s[] = {'1', '2', '3', 'a', 'b', '4'};
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
	{
		n = 10 * n + s[i] - '0';
	}
	printf("%d\n", n);
}