#include <stdio.h>

//将字符串t复制到s中，复制过程中将换行符、制表符等不可见字符分别转为\n,\t等可见的转义字符，编写具有相反功能的函数，将转义过程中遇见的转义字符转为实际字符。
int main()
{
	char t[] = {'h', 'e', 'l', '\\','n', '\\','t', 's', '\0'};
	char s[] = {'\0'};
	printf("t:%s\n", t);

	int i, j;
	for (i = j = 0; t[i] != '\0'; ++i)
	{
		switch(t[i]) {
			case '\\':
				switch('n'){
					case 'n':
						s[j++] = '\n';
						break;
					case 't':
						s[j++] = '\t';
						break;
					default:
						s[j++] = '\\';
						s[j++] = t[i];
						break;	
				}
				break;
			default:
				s[j++] = t[i];
				break;	
		}
	}
	s[j] = '\0';
	printf("s:%s\n", s);
}