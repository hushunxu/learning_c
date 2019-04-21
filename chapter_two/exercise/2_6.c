#include <stdio.h>

//编写函数，返回对x执行下列操作后的结果值：将x中从第p位开始的n个（二进制）位设置为y中最右边n位的值。x的其余值保持不变
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	return x & ~(~(~0 << n) << (p+1-n)) | 
	(y & ~(~0 << n)) << (p+1-n); 
}