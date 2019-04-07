#include <stdio.h>

 
void recomment(int c);

void in_comment(void);

void echo_quote(int c);

int main()
{
	int c, d;

	while ((c = getchar()) != EOF) {
		recomment(c);
	}
	return 0;
}

//搜索注释语句的起始标志，/*
void recomment(int c)
{
	int d;

	if (c == '/')
	{
		if ((d = getchar()) == '*')
		{
			in_comment();
		} else if(d == '/') {
			//注释
			putchar(c);
			putchar(d);
		} else {
			//不是注释
			putchar(c);
			putchar(d);
		}
	} else if (c == '\'' || c == '"') {
		//引号开始部分
		echo_quote(c);
	} else {
		//不是注释
		putchar(c);
	}
}

//有效注释
void in_comment(void)
{
	int c, d;
	c = getchar(); //之前的字符
	d = getchar(); //当前字符
	while (c != '*' || d != '/') { //搜索结束标志
		c = d;
		d = getchar();
	}
}

//确认找到的字符是单引号还是双引号
void echo_quote(int c)
{
	int d;

	putchar(c);
	while ((d = getchar()) != c) {
		putchar(d);
		if (d == '\\')
		{
			//避免把跟在反斜杠后面的引号看做是结束引号，直接将其输出
			putchar(getchar());
		}
	}
	putchar(d);
}