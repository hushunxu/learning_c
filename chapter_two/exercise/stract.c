#include <stdio.h>

//将字符串t连接到字符串s的尾部
int main()
{
	char s[] = {'a', 'b', 'c', '\0'};
	char t[] = {'d', 'e', 'f', '\0'};

	int i,j;

	i = j = 0;
	//处理到s的尾部
	while (s[i] != '\0') {
		i++;
	}
// printf("%d\n", i);
// printf("%s\n", s);
// printf("%s\n", t);
	//拷贝t
	while ((s[i++] = t[j++]) != '\0') {
		;
	}
	printf("%s\n", s);
}