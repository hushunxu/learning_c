// #include <stdio.h>

//重写将大写字母转换为小写字母的函数lower
int lower(int c)
{
	//c为大写字母，值为c + 'a' - 'A',小写字母原样返回
	return c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c;
}