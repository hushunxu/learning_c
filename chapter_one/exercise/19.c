#include <stdio.h>

#define MAXLINE 1000 //每一行最大输入长度

int getlines(char line[], int maxline);

void reverses(char s[]);

//将字符串s中的字符顺序颠倒过来
int main()
{
	char line[7] = {'s', 'a', 'd', 'a', ' ', '\n','\0'};

	char line[MAXLINE];

	while (getlines(line, MAXLINE) > 0)
	{
		reverses(line);
		printf("%s\n", line);
	}
}

//将一行读入到s中，并返回其长度
int getlines(char s[], int lim)
{
	int c, i, j;

	j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
	{
		//改行总长度lim，数组最大下标lim-1，留一个位置给换行符
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
	//给结束符留一个位置
	s[j] = '\0';
	return i;
}


void reverses(char s[])
{
	int i, j;
	char temp;

	i = 0;
	//定位到字符串末尾，然后从'\0'倒退一个位置
	while (s[i] != '\0') 
	{
		++i;
	}
	// printf("%d\n", i);
	--i;
	// printf("%d\n", i);

	//如果倒退一个遇到换行符，就再倒退一个
	if (s[i] == '\n')
	{
		--i;
	}
// printf("%d\n", i);
	//字符串第一个下标
	j = 0;

	//字符串最后一个字符向字符串头部方向移动，前后互换
	while (j < i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		--i;
		++j;
	}
}