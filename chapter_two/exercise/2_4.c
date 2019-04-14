#include <stdio.h>

//编写函数，将字符串s1中任何与字符串s2中字符匹配的字符都删除
int main()
{
	char s1[] = {'b', 'e', 'c', '\0'};
	char s2[] = {'d', 'b', 'f', '\0'};

	int i, j, k;
	for (i = k = 0; s1[i] != '\0'; i++)
	{
		printf("i: %d s1: %c ", i, s1[i]);
		//s1中每个字符都与s2中每个字符比较，找到不相等的
		for (j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++) 
		{
			// printf("s1 : %c  s2: %c j: %d\n", s1[i], s2[j], j);
			printf("in--- j: %d s2: %c \n", j, s2[j]);
			;
		}
		printf("ext--- j: %d s2: %c \n", j, s2[j]);
		//如果匹配到s2最后，能找到，就复制
		if (s2[j] == '\0')
		{
			s1[k++] = s1[i];
		}
	}
	s1[k] = '\0';
	printf("%s\n", s1);

	// i: 0 
		//s1: b 
		//in--- j: 0 s2: d
		//ext--- j: 1 s2: b
	
	// i: 1 
		//s1: e 
		// in--- j: 0 s2: d
		// in--- j: 1 s2: b
		// in--- j: 2 s2: f
		// ext--- j: 3 s2:
	
	// i: 2 
		//s1: c 
		// in--- j: 0 s2: d
		// in--- j: 1 s2: b
		// in--- j: 2 s2: f
		// ext--- j: 3 s2:
	// ec
}