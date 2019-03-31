#include <stdio.h>

#define MAXLINE 1000 //允许一行输入的最大长度

int getlines(char line[], int maxline);

void copy(char to[], char from[]);

//打印最长的输入行
int main()
{
	int len; //当前行的长度
	int max; //目前为止发现的最长行的长度
	char line[MAXLINE] = "sahkdaksdDSQsSASASdd"; //当前的输入行
	char longest[MAXLINE]; //用于保存最长的行

	max = 0;
	while ((len = getlines(line, MAXLINE)) > 0)
	{
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	}

	if (max > 0)
	{
		printf("%s\n", longest);
	}
	return 0;
}


//将一行读入到s中并返回其长度
int getlines(char s[], int lim)
{
	// printf("%d\n", 1111);
	printf("%s\n", s);
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		s[i] = c;
	}

	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	printf("%d\n", i);
	return i;
}

//将from复制到to
void copy(char from[], char to[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
	{
		++i;
	}
}