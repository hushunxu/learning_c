#include <stdio.h>

#define MAXHIST 15 //柱状图的最大长度
#define MAXWORD 11 //单词的最大长度
#define IN  1 //单词内
#define OUT 0 //单词外

//打印输入单词长度的直方图，水平方向
//输入的单词中各个单词长度不一样，统计每种长度的单词数，然后用直方图表示出各长度单词数的多少
//https://blog.csdn.net/jeffashan/article/details/41992451
int main()
{
	int c, i, nc, state;//nc输入单词的长度 state标记单词内还是单词外
	int len;//每条的长度
	int maxvalue;//出现最多次的某长度单词出现的次数
	int ovflow;//超出单词最大长度的个数
	int wl[MAXWORD] = {0};//长度1-11的单词出现的次数

	state = OUT;//初始状态单词外
	nc = 0;//单词长度
	ovflow = 0;

	while ((c = getchar()) != EOF) {
		//单词结束
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if (nc > 0)
			{
				//超过单词最大长度ovflow+1
				if (nc < MAXWORD)
				{
					++wl[nc];
				} else {
					++ovflow;
				}
			}
			nc = 0;
		} else if (state == OUT) {
			//单词外，单词开始
			state = IN;
			nc = 1;
		} else {
			//单词之内
			++nc;
		}
	}

	//遍历所有的wl[i]，取出最大值
	maxvalue = 0;
	for (i = 1; i < MAXWORD; ++i)
	{
		if (wl[i] > maxvalue)
		{
			maxvalue = wl[i];
		}
	}

	for (i = 0; i < MAXWORD; ++i)
	{
		printf("%5d - %5d : ", i, wl[i]);
		if (wl[i] > 0)
		{
			//len 是直方图中直方条的长度
			//长度为i的单词数占maxvalue的比例
			if ((len = wl[i] * MAXHIST / maxvalue) <= 0)
			{
				len = 1;
			} 
		} else {
			len = 0;
		}

		while (len > 0) {
			putchar('*');//直方图用*表示
			--len;
		}
		putchar('\n');
	}

	if (ovflow > 0)
	{
		printf("There are %d words >= %d\n", ovflow, MAXWORD);
	}
}