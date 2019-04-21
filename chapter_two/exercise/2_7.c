// #include <stdio.h>

//编写函数，将x中第p位开始n个二进制位求反，x的其他各位保持不变
unsigned invert(unsigned x, int p, int n)
{
	return x ^ (~(~0 << n) << (p+1-n));
}