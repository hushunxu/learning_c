#include <stdio.h>

#define MAXLINE 1000 //每行的最大长度

int getlines(char line[], int maxline);

void reverses(char s[]);

//编写函数，将字符串s的字符顺序颠倒过来
int main()
{
	// char line[] = {'a', 'b', 'c', 'd', ' ', '\n','\0'};
	char line[] = {'a', 'b', 'c', 'd', ' ', '\0'};
	// char line[MAXLINE];

	// while (getlines(line, MAXLINE) > 0)
	// {
		reverses(line);
		printf("%s\n", line);
	// }
}

//将一行读入到s中，并返回其长度
int getlines(char s[], int lim)
{
	int i, c, j;

	j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
	{
		//s的长度是lim，最后一个留给\0,倒数第二个留给\n
		if (i < lim - 2)
		{
			s[j] = c;
			++j;
		}
	}

	if (c == '\n')
	{
		s[j] = c;
		++j;
		++i;
	}

	s[j] = '\0';
	return i;
}

//翻转字符串
void reverses(char s[])
{
	int i, j;
	char temp;

	i = 0;
	while (s[i] != '\0') {
		++i;
	}
	//倒退一个给\0
	--i;
	//遇到换行符再倒退一个
	if (s[i] == '\n')
	{
		--i;
	}
	j = 0;
	while (j < i) {
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		--i;
		++j;
	}
}