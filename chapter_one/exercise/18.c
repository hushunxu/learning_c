#include <stdio.h>

#define MAXLINE 1000

int getlines(char s[], int maxline);

int removes(char s[]);

//删除每个输入行末尾的空格及制表符，并删除完全是空格的行
int main()
{
	char line[7]; //当前的输入行

	//char line[7] = {'s', 'a', 'd', 'a', ' ', '\n','\0'}
	while (getlines(line, MAXLINE) > 0)
	{
		if (removes(line) > 0)
		{
			printf("%s\n", line);
		}
	}
	return 0;
}

//删掉字符串末尾的空格和制表符并返回其新长度。
//如果长度大于0，说明line中有不是空格和换行符的其他字符，程序会把这行打印出来,
//否则，说明line中全部是空格或者换行符，程序会忽略这行。
int removes(char s[])
{
	// printf("%s\n", s);
	// int i;
	// for (i = 0; i < 4; ++i)
	// {
	// 	printf("%c\n", line[i]);
	// 	// printf("%d\n", i);
	// }

	int i;

	i = 0;

	//找到换行符，定位到末尾
	while (s[i] != '\n')
	{
		++i;
	}
	// printf("%d\n", i);//5

	//回退一格
	--i;
	// printf("%d\n", i);//4

	//从后往前，遇到空格或者换行符就-1
	while (i > 0 && (s[i] == ' ' || s[i] == '\t'))
	{
		--i;
	}

	// printf("%d\n", i);//3

	//如果减完之后还>0，说明还有字符，将换行符和结束符写进去
	if (i > 0)
	{
		++i;
		s[i] = '\n';
		++i;
		s[i] = '\0';
	}

	printf("%d\n", i); //5

	return i;
}


int getlines(char s[], int lim)
{
	int c, i, j;

	j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
	{
		if (i < lim - 2)
		{
			s[j] = c;
			++j;
		}
	}
	if (i == '\n')
	{
		s[j] = c;
		++j;
		++i;
	}

	return i;
}