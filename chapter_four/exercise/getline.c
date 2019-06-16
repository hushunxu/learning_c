#include <stdio.h>
#define MAXLINE 100 //输入最大行长度

int myGetline(char line[], int max);
int myStrindex(char source[], char searchfor[]);

char parttern[] = "ould";//待查找的字符串

//找出所有与模式匹配的行
int main()
{
	char line[MAXLINE];
	int found = 0;

	while (myGetline(line, MAXLINE) > 0) {
		if (myStrindex(line, parttern) >= 0)
		{
			printf("%s\n", line);
			found++;
		}
	}
	return found;
}


//mymyGetline函数，将行保存到s中，并返回改行的长度
int myGetline(char s[], int lim)
{
	int c, i;
	i = 0;
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}

//myStrindex函数，返回t在s中的位置，若未找到则返回-1
int myStrindex(char s[], char t[])
{
	int i, j, k;

	//外圈循环s
	for (i = 0; s[i] != '\0'; i++)
	{
		//内圈循环t，引入j，s[j]和t[k]都匹配上
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
			  ;
		if (k > 0 && t[k] == '\0')
		{
			return i;
		}
	}
	return -1;
}