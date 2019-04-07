#include <stdio.h>

int brace, brack, paren;

void in_quote(int c);

void in_comment(void);

void search(int c);

//查找c语言基本语法错误，如圆括号、方括号、以及花括号不配对等。要正确处理引号（包括单双引号）、转义字符与注释
int main()
{
	int c;

	extern int brace, brack, paren;

	while ((c = getchar()) != EOF) {
		if (c == '/')
		{
			if ((c = getchar()) == '*')
			{
				//注释内
				in_comment();
			} else {
				search(c);
			}
		} else if (c == '\'' || c == '"') {
			//单双引号
			in_quote(c);
		} else {
			//查找是否配对
			search(c);
		}

		if (brace < 0)
		{
			printf("Unbalanced braces\n");
		}

		if (brack < 0)
		{
			printf("Unbalanced brackets\n");
		}

		if (paren < 0)
		{
			printf("Unbalanced parenthess\n");
		}
	}
}

void search(c)
{
	extern int brace, brack, paren;

	if (c == '{')
	{
		++brace;
	} else if(c == '}') {
		--brace;
	} else if (c == '[') {
		++brack;
	} else if (c == ']') {
		--brack;
	} else if (c == '(') {
		++paren;
	} else if (c == ')') {
		--paren;
	}
}

//注释
void in_comment(void) 
{
	int c, d;

	c = getchar();
	d = getchar();
	while (c != '*' || d != '/') {
		//一直找到注释结尾
		c = d;
		d = getchar();
	}
}

//单双引号
void in_quote(int c) 
{
	int d;
	while ((d = getchar()) != c) {
		//转义单斜杠
		if (d == '\\')
		{
			getchar();
		}
	}
}