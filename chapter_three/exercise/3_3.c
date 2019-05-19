#include <stdio.h>
#include <string.h>
//编写函数expand(s1, s2)，将字符串s1类似a-z一类的速记符号在字符串s2中扩展为等价的完整列表abc····xyz。该函数可以处理大小写字母和数字，并可以处理a-b-c、a-z0-9与a-z等类似的情况。
int main()
{
	char s1[] = {'a', '-', 'c', '0', '-', '3', 'A', '-', 'D', '\0'};
	char s2[] = {'\0'};

	char c;
	int i, j;

	i = j = 0;

	// i = strlen(s1);
	// printf("%c\n", s1[i++]);
	// i = 0;

	//将s1中一个字符读入到c中
	//+在后，先用再加
	while ((c = s1[i++]) != '\0')
	{
		printf("c = %c\n",c);
		//如果下一个字符是-且再下一个字符大于或等于c中的字符，进行扩展
		if (s1[i] == '-' && s1[i+1] >= c)
		{
			i++;
			while (c < s1[i])
			{
				s2[j++] = c++;
				// printf("c = %c\n", s2[j++]);
				// printf("s1s2 %c, s2 %s\n", c++, s2);
			}
		} else {
			s2[j++] = c;
			// printf("c else = %c\n", s2[j++]);
			// printf("s2s2 %c, s2 %s\n", c, s2);
		}
		// printf("s2 %c\n", s2[j++]);
	}
	s2[j] = '\0';
	printf("%s\n", s2);
}