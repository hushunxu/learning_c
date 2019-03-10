// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>

// int main()
// {
	//aoti() 将字符串转为整型
	// char s[] = " -210";	
	// int i, n, sign;

	// //跳过空白符;
	// for(i = 0; isspace(s[i]); i++)
	// 	;
	
	// //跳过符号	
	// sign = (s[i] == '-') ? -1 : 1;
	// // printf("%d\n", i); //1
	// // printf("%d\n", sign);//-1

	// if(s[i] == '+'|| s[i] == '-')
 //  		i++;
 //  	// printf("%d\n", i);//2

 //  	//将数字字符转换成整型数字
	// for(n = 0; isdigit(s[i]); i++) {
	// 	n = 10 * n + (s[i]-'0');
	// 	// printf("i %d n %d\n", i, n);
	// 	// i 2 n 2
	// 	// i 3 n 21
	// 	// i 4 n 210	
	// }
	    
	// // printf("%d\n", i); //1
	// // printf("%d\n", sign * n);  
	// // return sign * n;
		
	// return n;
// }

// #include <string.h>
// int main()
// {
// 	//reverse(char s[]) 倒置字符串s中各个字符的位置
// 	int c, i, j;
// 	char s[] = "shunxu";//uxnuhs
// 	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
// 	{
// 		//第一个字符与最后一个字符互换位置
// 		c = s[i];//从前往后第一个字符赋值到c
// 		s[i] = s[j];//最后一个字符s[j]赋值到s[i]
// 		s[j] = c;//c,即第一个字符复制到最后一个字符
// 	}
// 	printf("%s\n", s);
// }

// #include <ctype.h>
// #include <stdio.h>

// //atof() 字符串转为浮点数
// int main()
// {
// 	double val, power;
// 	int i, sign;
// 	char s[] = " 311.01";
// 	//跳过空白字符
// 	for (i = 0; isspace(s[i]); ++i)
// 		;

// 	//跳过符号
// 	sign = (s[i] == '-') ? -1 : 1;
// 	if (s[i] == '+' || s[i] == '-')
// 		i++;

// 	//处理整数部分
// 	for (val = 0.0; isdigit(s[i]); i++) 
// 	{
// 		val = 10.0 * val + (s[i] - '0');
// 		// printf("i %d val %.2f\n", i, val);
// 		// i 1 val 3.00
// 		// i 2 val 31.00
// 		// i 3 val 311.00
// 	}

// 	//过滤小数点
// 	if (s[i] == '.')
// 		i++;

// 	// sign = isdigit(s[i]);
// 	// printf("i %d sign %d\n", i, sign);
// 	// i 5 sign 1

// 	//处理小数部分
// 	for (power = 1.0; isdigit(s[i]); i++)
// 	{
// 		val = 10.0 * val + (s[i] - '0');
// 		power *= 10.0;
// 		// printf("i %d val %.2f power %.2f\n", i, val, power);
// 		// i 5 val 3110.00 power 10.00
// 		// i 6 val 31101.00 power 100.00
// 	}
// 	printf("%.2f\n", sign * val / power);
// 	// return sign * val / power;
// }


// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	// itoa(int n, char s[])，把数字n转为字符串,并保存到s中
// 	// atoi()的逆函数
// 	char s[] = "";
// 	int n = -108;

// 	int i, sign;

// 	//如果n是负数，转为正数
// 	if ((sign = n) < 0)
// 	{
// 		n = -n;
// 	}

// 	i = 0;
// 	do {
// 		s[i++] = n % 10 + '0';
// 		printf("i %d n %d s %s\n", i, n, s);
// 		// i 1 n 108 s 8
// 		// i 2 n 10 s 80
// 		// i 3 n 1 s 801
// 	} while ((n /= 10) > 0);
	
// 	//如果是负数，转为负数
// 	if (sign < 0)
// 	{
// 		s[i++] = '-';
// 	}
// 	s[i] = '\0';

// 	//取反
// 	// reverse(s);
// 	// printf("%s\n", s);
// }


// #include <stdio.h>

// int main()
// {
// 	//strindex(char s[], char t[]) 返回t在s中的位置，若未找到返回-1
// 	char s[] = "quanzhou";
// 	char t[] = "ua";
// 	char s_temp, t_temp;

// 	int i, j, k;

// 	for (i = 0; s[i] != '\0'; i++)
// 	{
// 		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
// 		{
// 			s_temp = s[j];
// 			t_temp = t[k];
// 			printf("j %d k %d s_temp %c t_temp %c \n", j, k, s_temp, t_temp);
// 			// j 1 k 0 s_temp u t_temp u
// 			// j 2 k 1 s_temp a t_temp a
// 			// i 1 s quanzhou
// 		}

// 		if (k > 0 && t[k] == '\0')
// 		{
// 			printf("i %d s %s\n", i, s);
// 			// i 1 s quanzhou
// 			return i;
// 		}
// 	}
// 	return -1;
// }


#include <stdio.h>
#include <ctype.h>

#define NUMBER '0'//标识找到一个数

int getch(void);
void ungetch(int);


int main()
{
	//getop() 获取下一个运算符或操作数
	int i, c;
	char s[] = " s202.34";

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