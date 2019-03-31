#include <stdio.h>

#define MAXLINE 1000 //每行最多输出1000个字符
#define LONGLINE 80 //目标数量

int getlines(char line[], int maxline);

//打印长度大于80个字符的所有输入行
int main()
{
	int len; //当前行的输入长度
	char line[MAXLINE]; //当前输入行

	while ((len = getlines(line, MAXLINE)) > 0)
	{
		if (len > LONGLINE)
		{
			printf("%s\n", line);
		}
	}
	return 0;
}

//将当前输入行读取到s中，并返回其长度
int getlines(char s[], int lim)
{
	int c, i, j;

	j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
	{
		//数组s中最后一个下标是lim-1,s[lim-1] = '\0';给换行符留一个s[lim-2] = '\n';
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