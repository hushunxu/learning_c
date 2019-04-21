#include <stdio.h>

//将字符串s2中任一字符串s1中第一次出现的位置作为结果返回，如果s1中不包含s2中的字符，则返回-1
int main()
{
	char s1[] = "abc";
	char s2[] = "sdd";
	int i, j;

	//外层循环s1
	for (i = 0; s1[i] != '\0'; i++)
	{
		//内层循环s2
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] == s2[j])
			{
				printf("%d\n", i);
				return i;
			}
		}
	}
	printf("%d\n", -1);
	return -1;
}