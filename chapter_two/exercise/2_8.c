//编写一个函数。返回将x循环右移(从最右端移出的位将从左端再移入)n位后所得到的值
unsigned rightrot(unsigned x, int n)
{
	int wordlength(void);
	int rbit;

	while (n-- > 0) {
		rbit = (x & 1) << (wordlength() - 1);
		x = x >> 1;
		x = x | rbit;
	}
	return x;
}

int wordlength(void)
{
	int i;
	unsigned v = (unsigned) ~0;

	for (i = 0; (v = v >> 1); i++)
	{
		;
	}
	return i;
}