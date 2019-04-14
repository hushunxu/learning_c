#include <stdio.h>

//将ASCII字符集中的字符映射到对应的小写字母，如果转换的字符不是大写字母，返回字符本身。
int main()
{
	int c = 'B';
	int temp;
	if (c >= 'A' && c <= 'Z')
	{
		//'a'	97
		//'A'	65	
		temp = c + 'a' - 'A';
		printf("%d\n", temp);
	} else {
		temp = c;
		printf("%d\n", temp);
	}
}