// #include <stdio.h>
//5.3
//指针方式实现函数strcat(s, t)将t指向的字符串复制到s指向的字符串的尾部
//数组的实现方式
void stract(char s[], char t[])
{
	int i, j;
	i = j = 0;
	while(s[i] != '\0')
		i++;
	while((s[i++] = t[j++]) != '\0')
		;
}

//指针方式实现
void stract(char *s, char *t)
{
	while(*s)
		s++;
	while(*s++ = *t++)
		;
}

//5.4 编写函数strend(s, t)如果字符串t出现在字符串s的尾部，该函数返回1，否则返回0
strend(char *s, char *t)
{
	char *bs = s;
	char *bt = t;

	for ( ; *s; s++)
		;
	for ( ; *t; t++)
		;
	for ( ; *b = *t; s--, t--)
		if (t == bt || s == bs)
			break;
	if (*s == *t || t == bt && *s != '\0')
		return  1;
	else
		return 0;
}

//5.5实现库函数strncpy、strncat和strcmp，他们最多对参数字符串中的前n个字符进行操作。
//strncpy(s, t, n)将t中最多前n个字符复制到s中
void strncpy(char *s, char *t, int n)
{
	while(*t && t-- > 0)
		*s++ = *t++;
	//t如中字符小于n个，执行完t的复制之后，n仍然大于0，在s尾部用'\0'填充
	while(n-- > 0)
		*s++ = '\0';
}

//strncat(s, ct, n)将字符串ct最多前n个字符连接到字符串s的尾部，并以'\0'结束，该函数返回s
void strncat(char *s, char *t, int n)
{
	void strncpy(char *s, char *t, int n);
	int strlen(char *);
	strncpy(s + strlen(s), t, n);
}

//strcmp(cs, ct, n)将字符串cs至多前n个字符与字符串ct相比较。当cs == ct时，返回0；当cs > ct时，返回0
int strcmp(char *s, char *t, int n)
{
	for ( ; *s == *t; s++, t++)
	{
		if (*s == '\0' || --n <= 0)
			return 0;
	}
	return *s - *t;
}

//5.6采用指针而非数组索引方式改写前面章节的某些程序
//getline()将一行读入到s中，并返回其长度

//数组索引实现
#include <stdio.h>
int getline(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if (c == '\n')
		s[i] = c;
		++i;

	s[i] = '\0';
	return i;
}

//指针实现
#include <stdio.h>

int getline(char *s, int lim)
{
	int c;
	char *t = s;//函数刚开始的时候，指针s指向字符数组的第一个字符

	while(--lim > 0 && (c = getchar()) != EOF && c != '\n')
		*s++ = c;
	if (c == '\n')
	{
		*s++ = c;
	}
	*s = '\0';
	return s - t;
}

//atoi() 将字符串s转换为相应的整型
//数组索引
int atoi(char s[])
{
	//char s[] = " -210";	
	int i, n, sign;

	//跳过空白符;
	for(i = 0; isspace(s[i]); i++)
		;
	
	//跳过符号	
	sign = (s[i] == '-') ? -1 : 1;
	// printf("%d\n", i); //1
	// printf("%d\n", sign);//-1

	if(s[i] == '+'|| s[i] == '-')
  		i++;
  	// printf("%d\n", i);//2

  	//将数字字符转换成整型数字
	for(n = 0; isdigit(s[i]); i++) {
		n = 10 * n + (s[i]-'0');
		// printf("i %d n %d\n", i, n);
		// i 2 n 2
		// i 3 n 21
		// i 4 n 210	
	}
	    
	// printf("%d\n", i); //1
	// printf("%d\n", sign * n);  
	// return sign * n;
		
	return n;
}

//指针形式
#include <stype.h>

int atoi(char *s)
{
	int n, sign;

	for ( ; isspace(*s); s++)
		;

	sign = (*s == '-') ? -1 : 1;
	if (*s == '+' || *s == '+')
		s++;

	for (n = 0; isdigit(*s); s++)
		n = 10 * n + *s - '0';

	return sign * n;
}

//reverse()倒置字符串s中各个字符的位置
//数组索引形式
#include <sting.h>

void reverse(char s[])
{
	int i, c, j;
	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];//第一个字符赋值给c
		s[i] = s[j];//最后一个字符赋值给第一个字符
		s[j] = c;//第一个字符赋值给最后一个字符
	}
}

//指针形式
void reverse(char *s)
{
	int c;
	char *t;

	for (t = s + strlen(s) - 1; s < t; s++, t--)
	{
		c = *s;
		*s = *t;
		*t = c;
	}
}
//指针s的初值指向字符串第一个字符，字符指针t的初值指向字符串最后一个字符（不包括'\0'）


//atof()将字符串转为对应的浮点型
//数组形式
#include

double atof(char s[])
{
	double val, power;
	int i, sign;
	char s[] = " 311.01";
	//跳过空白字符
	for (i = 0; isspace(s[i]); ++i)
		;

	//跳过符号
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;

	//处理整数部分
	for (val = 0.0; isdigit(s[i]); i++) 
	{
		val = 10.0 * val + (s[i] - '0');
		// printf("i %d val %.2f\n", i, val);
		// i 1 val 3.00
		// i 2 val 31.00
		// i 3 val 311.00
	}

	//过滤小数点
	if (s[i] == '.')
		i++;

	// sign = isdigit(s[i]);
	// printf("i %d sign %d\n", i, sign);
	// i 5 sign 1

	//处理小数部分
	for (power = 1.0; isdigit(s[i]); i++)
	{
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
		// printf("i %d val %.2f power %.2f\n", i, val, power);
		// i 5 val 3110.00 power 10.00
		// i 6 val 31101.00 power 100.00
	}
	printf("%.2f\n", sign * val / power);
	// return sign * val / power;
}

//指针形式
#include <stype.h>

double atof()
{
	double val, powr;
	int sign;

	//跳过空格
	for (; isspace(*s); s++)
		;

	//跳过符号
	sign = (*s == '-1') ? -1 : 1;
	if (*s == '+' || *s == '-')
		s++;

	//处理整数
	for (val = 0.0; isdigit(*s); s++)
	{
		val = 10.0 * val + (*s - '0');
	}

	//跳过小数点
	if (*s == '.')
	{
		s++;
	}

	//处理小数，先乘再除
	for (power = 1.0; isdigit(*s); s++)
	{
		val = 10.0 * val + (*s - '0');
		power *= 10.0;
	}

	return sign * val / power;
}

//itoa()将数字转为字符串, atoi()的逆函数（将字符串转为数字）
//数组形式
void itoa(int n, char s[])
{
	int i, sign;
	int n = -108;

	//如果n是负数，变为正数
	if ((n = sign) < 0)
	{
		n = -n;
	}

	i = 0;
	do {
		//取下一个数字
		s[i++] = n % 10 + '0';
		// printf("i %d s %s\n", i, s);
		// i 1 n 108 s 8
		// i 2 n 10 s 80
		// i 3 n 1 s 801
	} while ((n /= 10) > 0);

	//变回负数
	if (sign < 0)
	{
		s[i++] = '-';
	}
	s[i] = '\0';

	//取反
	reverse(s);
}

//指针形式
void itoa(int n ,char *s)
{
	int sign;
	char *t = s;

	if ((sign = n) < 0)
	{
		n = -n;
	}

	do {
		*s++ = n % 10 + '0';
	} while ((n /= 10) > 0);

	if (sign < 0)
	{
		*s++ = '-';
	}
	*s = '\0';
	reverse(t);
}

//strindex(char s[], char t[])：返回t在s中的位置，若未找到返回-1

//数组形式
int strindex(char s[], char t[])
{
	int i, j, k;

	//外层循环s
	for (i = 0; s[i] != '\0'; ++i)
	{
		//内层循环t，且判断s与t是否匹配上
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
		{
			;
		}

		//匹配成功
		if (k > 0 && t[k] == '\0')
		{
			return i;
		}
	}
	return -1;
}

//指针形式
int strindex(char *s, char *t)
{
	char *b = s;//b指向s第一个元素
	char *p, *r;

	for ( ; *s != '\0'; *s++)
	{
		for (p = s, r = t; *r != '\0' && *p == *r; p++, r++)
		{
			;
		}

		//匹配成功
		if (r > t && *r == '\0')
		{
			return s - b;
		}
	}

	return -1;
}

//getop() 获取下一个运算符或操作数
#include <stdio.h>
#include <ctype.h>

#define NUMBER '0'//标识找到一个数

int getch(void);
void ungetch(int);

//数组形式
int getop(char s[])
{
	int i, c;
	// char s[] = " s202.34";

	while((s[0] = c = getch()) == ' ' || c == '\t')
		;

	s[1] = '\0';

	//不是数
	if (!isdigit(c) && c != '.')
	{
		printf("%c\n", c);
		return c;
	}

	i = 0;
	//整数部分
	if (isdigit(c))
	{
		while(isdigit(s[i++] = c = getch()))
			;
	}

	//小数部分
	if (c == '.')
	{
		while(isdigit(s[i++] = c = getch()))
			;
	}
	s[i] = '\0';

	//不是文件默认，吐出去
	if (c != EOF)
	{
		ungetch(c);
	}
	return NUMBER;
}


//指针形式
#include <stdio.h>
#include <ctype.h>

#define NUMBER '0'

int getch(void);
void ungetch(int);

int getop(char *s)
{
	int c;

	while((*s = c = getch()) == ' ' || c == '\t')
		;

	*(s+1) = '\0';
	if (!isdigit(c) && c != '.')
	{
		return c;
	}

	if (isdigit(c))
	{
		while(isdigit(*s++ = c = getch()))
			;
	}

	if (c == '.')
	{
		while(isdigit(*s++ = c = getch()))
			;
	}

	*s = '\0';
	if (c != EOF)
	{
		ungetch(c);
	}

	return NUMBER;
}