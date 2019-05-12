#include <stdio.h>

//编写函数，将字符串t复制到字符串s中，并在复制过程中将换行符、制表符等不可见字符分别转为\n,\t等相应的可见字符序列
int main()
{
	char t[] = {'h', 'e', '\t', 'l', 'l', 'o', 'w', '\0'};
	char s[] = {'\0'};

	int i,j;

	for (i = j = 0; t[i] != '\0'; i++)
	{
		switch (t[i]) {
			case '\n':
				s[j++] = '\\';
				s[j++] = 'n';
				break;
			case '\t':
				s[j++] = '\\';
				s[j++] = 't';
				break;
			default:
				s[j++] = t[i];
				break;		
		}
	}
	s[j] = '\0';
	printf("%s\n", s);
}