#include <ctype.h>
#include <stdio.h>

//对atof函数进行扩充，使其支持科学计数法 12.34e-5
int main()
{
	// char s[] = {'\t', '-','2', '2', '.', '1', '2', 'e','-', '3', '3', '0', '\0'};
	char s[] = {'\t', '2', '2', '.', '1', '2', 'e', '3', '0', '\0'};
	double val, power;
	int exp, i, sign;

	//过滤空格
	for (i = 0; isspace(s[i]); i++)
		;

	//处理正负号
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
	{
		i++;
	}

	//处理整数
	for (val = 0.0; isdigit(s[i]); i++)
	{
		val = 10.0 * val + (s[i] - '0');
	}

	//处理小数
	if (s[i] == '.')
	{
		i++;
	}

	for (power = 1.0; isdigit(s[i]); i++)
	{
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
		printf("val:%0.2f, power:%0.2f\n", val, power);
	}

	val = sign * val / power;
	printf("%0.2f\n", val);

	printf("s[i]:%c\n", s[i]);
	//处理科学计数法
	if (s[i] == 'e' || s[i] == 'E')
	{
		sign = (s[++i] == '-') ? -1 :1 ;
		printf("sign:%d\n", sign);
		if (s[i] == '+' || s[i] == '-')
		{
			i++;
		}

		printf("s[i]:%c\n", s[i]);
		for (exp = 0; isdigit(s[i]); i++)
		{
			// printf("111111");
			exp = 10 * exp + (s[i] - '0');
			printf("exp:%d\n", exp);
		}

		if (sign == 1)
		{
			while (exp-- > 0) {
				val *= 10;
				printf("sign = 1, val:%0.2f\n", val);
			}
		} else {
			while (exp-- > 0) {
				val /= 10;
				printf("sign = -1, val:%0.2f\n", val);
			}
		}
	}

	printf("final val:%0.2f\n", val);
	return val;
}