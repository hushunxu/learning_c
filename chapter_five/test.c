#include <stdio.h>

int main()
{
    // printf("%d\n", 10);


   	// int a[10];
    // int i;
    // for (i = 0; i<10; i++)
    //     scanf("%d", &a[i]);
    // for (i = 0; i<10; i++)
    //     printf("%d\n", a[i]);
    // printf("\n");


    // int array[20]={0};  
    // int *ptr=array; 
    // int i; 
    // for(i=0; i<20; i++)  
    // {  
    //     (*ptr)++;  
    //     ptr++;
    //     scanf("%d", &array[i]);
    //     printf("%d\n", array[i]);
    // }  

    
  
   // int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    // int array[20];

    //数组初始化
    //全部初始化为0
    //int array[20]={0}; 

    //部分初始化，{}里面的个数小于元素个数时，只给前面的赋值，其他未初始化的为0
    //int array[10] = {1, 2, 3, 4, 5};
        //{}里面的个数大于元素个数时，报错
        //int array[3] = {1, 2, 3, 4, 5};

    //全部初始化，每个数组元素都赋值
    //int array[5] = {1, 2, 3, 4, 5};

    //数组全部赋值,可不写下标，每个元素都赋值了
    // int array[] = {1, 2, 3, 4, 5};

    //static没有初始化，默认是0
    // static int array[5];

        //static部分初始化，从第一个元素开始初始化
        // static int array[5] = {1, 2};

        //static全部初始化
        //static int array[] = {1, 2, 3, 4, 5};

    //字符数组
    // char s[10]={'c', '1', 'p', 'r', 'o', 'g', 'r', 'a', 'm'};

    // char s[]= "BASIC\ndBASE";
    // // printf("%s\n",);
    // int loop;
    
    // for(loop = 0; loop < 10; loop++)
    //     printf("%c\n", s[loop]);
      
   // int a = 100;
   // char str[20] = "c.biancheng.net";
   // printf("%#X, %#X\n", &a, str);
   // return 0;

   int y = 10;
   int *ip;
   ip = &y;
   int ip = *ip + 1;
   printf("%d", ip);
}
