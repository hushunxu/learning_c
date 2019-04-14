#include <stdio.h>

#define YES 1
#define NO 0
//编写函数，把由16进制数字组成的字符串（包含可选的前缀0x或0X转换为与之等价的整型值。字符串允许包含的数字包括0-9，a-f，A-F）
//16进制，逢16进1，一般用数字0-9和字母a-f（或者A-F）表示，a-f表示10-15。计算机中用0x或0X标识是16进制。
int main()
{
	char s[] = {'0', 'x', '1', 'a', 'f', '5'};
	// 0x1af5
	int hexdigit, i, inhex, n;

	i = 0;
	//跳过开头的标识符
	if (s[i] == '0')
	{
		++i;
		if (s[i] == 'x' || s[i] == 'X')
		{
			++i;
		}
	}

	n = 0;

	inhex = YES;
	for ( ; inhex == YES; ++i) {
		//0-9
		if (s[i] >= '0' && s[i] <= '9')
		{
			hexdigit = s[i] - '0';
		} else if (s[i] >= 'a' && s[i] <= 'f') {
			//a-f
			hexdigit = s[i] - 'a' + 10;
		} else if (s[i] >= 'A' && s[i] <= 'F') {
			//A-F
			hexdigit = s[i] - 'A' + 10;
		} else {
			//不是有效的16进制组成字符
			inhex = NO;
		}

		if (inhex == YES) {
			n = 16 * n + hexdigit;
		}
	}
	printf("%d\n", n);
}