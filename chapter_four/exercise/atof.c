#include <stdio.h>
#include <ctype.h>

//把字符串s转为相应的双精度浮点数
int main()
{
	char s[] = {'\t', '2', '2', '.', '1', '2', '-', '1', '3', '0', '\0'};

	double val ,power;
	int i, sign;

	//跳过空白符
	for (i = 0; isspace(s[i]); i++)
		;

	//跳过正负号
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
	{
		i++;
	}

	//处理整数
	for (val = 0.0; isdigit(s[i]); i++)
	{
		val = 10.0 * val + (s[i] - '0');
		printf("int val:%0.2f\n", val);
	}

	//处理小数
	if (s[i] == '.')
	{
		i++;
	}
	printf("i:%d\n", i);

	for (power = 1.0; isdigit(s[i]); i++)
	{
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
		printf("float val:%0.2f, power %0.2f\n", val, power);
	}

	val = sign * val / power;
	printf("%0.2f\n", val);
	return sign * val / power;
}