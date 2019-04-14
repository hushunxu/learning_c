#include <stdio.h>
#include <limits.h>

//确定分别有signed和unsigned限定的char、short、int以及long类型变量的取值范围
int main()
{
	//signed
	printf("signed char min = %d\n", CHAR_MIN);
	printf("signed char max = %d\n", CHAR_MAX);
	printf("signed short min = %d\n", SHRT_MIN);
	printf("signed short max = %d\n", SHRT_MAX);
	printf("signed int min = %d\n", INT_MIN);
	printf("signed int max = %d\n", INT_MAX);
	printf("signed long min = %ld\n", LONG_MIN);
	printf("signed long max = %ld\n", LONG_MAX);

	//unsigned
	printf("unsigned char max = %u\n", UCHAR_MAX);
	printf("unsigned short max = %u\n", USHRT_MAX);
	printf("unsigned int max = %u\n", UINT_MAX);
	printf("unsigned long max = %lu\n", ULONG_MAX);
	
	//signed char min = -128
	// signed char max = 127
	// signed short min = -32768
	// signed short max = 32767
	// signed int min = -2147483648
	// signed int max = 2147483647
	// signed long min = -9223372036854775808
	// signed long max = 9223372036854775807
	// unsigned char max = 255
	// unsigned short max = 65535
	// unsigned int max = 4294967295
	// unsigned long max = 18446744073709551615
}
