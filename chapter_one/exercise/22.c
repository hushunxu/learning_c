#include <stdio.h>

#define MAXCOL 10 //折行位置，即输入行的第n列
#define TABINK 8 //制表符

char line[MAXCOL]; //当前的输入行

int exptab(int pos);

int findblnk(int pos);

int newspos(int pos);

void printl(int pos);

//把较长的输入行折叠成短一些的两行或者多行，折行的位置在输入行的第n列之前的最后一个非空格符之后。
//要保证程序能够智能地处理输入行很长以及在指定列前没有空格或制表符的情况
int main()
{
	int c, pos;

	pos = 0; //当前行的输入位置
	while ((c = getchar()) != EOF) {
		line[pos] = c;
		if (c == '\t')
		{
			//制表符转为空格
			pos = exptab(pos);
		} else if (c == '\n') {
			//遇到换行符把之前输入的文本打印出来
			printl(pos);
			pos = 0;
		} else if (++pos >= MAXCOL) {
			//pos达到MAXCOL，对输入行进行折叠
			pos = findblnk(pos);
			printl(pos);
			pos = newspos(pos);
		}
	}
}

//把制表符扩展成空格处理，标记\t所包含的最后一个空格的下标
int exptab(int pos)
{
	line[pos] = ' ';
	for (++pos; pos < MAXCOL && pos % TABINK != 0; ++pos)
	{
		line[pos] = ' ';
	}
	if (pos < MAXCOL)
	{
		//制表符点之后小于MAXCOL
		return pos;
	} else {
		//到达最后一个制表符点了,打印该数组及\n
		printl(pos);
		return 0;
	}
}


//打印输出从位置0到位置pos-1之间的字符
void printl(int pos)
{
	int i;
	for (i = 0; i < pos; ++i) {
		putchar(line[i]);
	}

	if (pos > 0)
	{
		putchar('\n');
	}
}

//从输入行的pos处开始倒退着寻找一个空格，
//如果找到一个空格，返回紧跟着该空格符后面的那个位置的下标，
//如果没有找到空格，返回折行位置
int findblnk(int pos)
{
	while (pos > 0 && line[pos] != ' ') {
		--pos;
	}
	if (pos == 0)
	{
		//没找到空格
		return 0;
	} else {
		//找到空格
		return pos + 1;
	}
}

//调整输入行，将把从位置pos开始的字符复制到下一个输出行的开始，然后返回pos的新值
int newspos(int pos)
{
	int i, j;
	if (pos <= 0 || pos > MAXCOL)
	{
		//无空格的情况，重置为0，开始新的折行
		return 0;
	} else {
		i = 0;
		for (j = pos; j < MAXCOL; ++j)
		{
			// 将多余的复制到新的一行
			line[i] = line[j];
			++i;
		}
		return i;
	}
}
