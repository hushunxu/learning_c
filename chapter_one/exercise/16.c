#include <stdio.h>

#define MAXLINE 1000 //一行的最大长度是1000

int getlines(char line[], int maxline);

void copy(from[], to[]);

int main()
{
	int len; //当前行的长度
	int max; //目前为止最长行的长度
	char line[MAXLINE]; //当前输入行
	char longest[MAXLINE]; //保存最长的行

	max = 0;
	while ((len = getlines(line, MAXLINE)) > 0)
	{
		printf("%d, %s\n", len, line);
		//取出最大值
		if (len > max)
		{
			max = len;
		}
	}

	if (max > 0)
	{
		printf("%s", longest);
	}

	return 0;
}


//将当前输入行内容保存到s中，并返回其长度
int getlines(char line[], int lim)
{
	int c, i, j;

	j = 0;
	//处理任意长度的输入行
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
	{
		//判断字符串数组是否还有空位置
		if (i < lim - 2)
		{
			s[j] = c;
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


//将from复制到copy
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}