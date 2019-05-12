#include <stdio.h>

//折半查找法
int main()
{
	int v[] = {1, 2, 3, 4, 5, 6, 7};

	int n = 7;

	int low, high, mid;

	int x = 6;

	low = 0;
	high = n - 1;
	mid = (low + high) / 2;

	while (low <= high && x != v[mid]) 
	{
		if (x < v[mid])
		{
			//左半边
			high = mid - 1;
		} else {
			//右半边
			low = mid + 1;
		}
		mid = (low + high) / 2;
		printf("mid: %d\n", mid);
	}
	if (x == v[mid])
	{
		printf("%d\n", mid);
	} else {
		printf("%s\n", "not found");
	}
}