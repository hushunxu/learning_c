#include <stdio.h>

#define MAXLINE 1000 //允许输入行的最大长度

//程序读入一组文本行，并把最长的文本行打印出来

// while (还有未处理的行) 
// {
// 	if (改行比已处理的最长行还要长) {
// 		保存该行
// 		保存该行的长度
// 	}
// 	打印最长行
// }


int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
	int len; //当前行的长度
	int max; //目前为止发现最长行的长度
	char line[MAXLINE]; //当前的输入行
	char longest[MAXLINE]; //用于保存最长的行

	max = 0;
	//取出输入最长的行，复制
	while ((len = getline(line, MAXLINE)) > 0)
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
int getline(char s[], int lim)
{
	int c, i;

	//c不是结尾且不是换行符，存入s[]中
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		s[i] = c;
	}

	//c是换行符
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}

	//结尾
	s[i] = '\0';
	//返回长度
	return i;
}

//将from复制到to，假定to足够长
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}