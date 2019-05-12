#include <stdio.h>
//折半查找
// int binsearch(int x, int v[], int n)
// {
// 	int low, high, mid;
// 	low = 0;
// 	high = n - 1;
// 	while (low <= high) {
// 		mid = (low + high) / 2; //求中间位置
// 		if (x < v[mid])
// 		{
// 			//小于中间值，在左边部分
// 			high = mid - 1;
// 		} else if (x > v[mid]) {
// 			//大于中间值，在右边部分
// 			low = mid + 1;
// 		} else {
// 			//等于中间值，查找成功
// 			return mid;
// 		}
// 	}
// 	return -1;
// }

int main()
{
	//待查找的数组
	// int v[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 

	//数组长度
	// int n = 9;

	//待查找的数组
	int v[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; 
	
	//数组长度
	int n = 11;

	int low, high, mid;

	//数组键最小
	low = 0;

	//数组键最大
	high = n - 1;

	//待查找的目标值
	int x = 6;
	while (low <= high) {
		mid = (low + high) / 2; //求中间位置
		printf("mid: %d\n", mid);
		printf("v[mid]: %d \n", mid);
		if (x < v[mid])
		{
			//小于中间值，在左边部分
			high = mid - 1;
		} else if (x > v[mid]) {
			//大于中间值，在右边部分
			low = mid + 1;
		} else {
			//等于中间值，查找成功
			printf("%d\n", mid);
			return mid;
		}
	}
	printf("%d\n", 1);
	return -1;
}