#include <stdio.h>

//shell排序算法，按递增顺序对数组进行排序 
//先比较距离远的元素，可以快速减少大量无序情况，被比较的元素之间距离逐步减少，直到减为1，这时候排序变成了相邻元素的互换。
int main()
{
	char v[] = {'1', '3', '5', '2', '6', '\0'};
	int n = 5;
	int gap, i, j, temp;

	//控制两个被比较元素之间的距离
	for (gap = n / 2; gap  > 0; gap /= 2)
	{
		printf("gap init %d\n", gap);
		//元素间移动位置
		for (i = gap; i < n; i++)
		{
			//比较各对相对gap个位置的元素，当两个元素逆序时将它们互换
			for (j = i - gap; j >= 0 && v[j] > v[j+gap]; j -= gap)
			{
				printf("i:%d, j:%d, v[j]:%c, v[j+gap]:%c\n", i, j, v[j], v[j+gap]);
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
			}
		}
	}

	printf("%s\n", v);
}