#include <stdio.h>

int main()
{
	int i;
	char s[] = "ab";
	char t[] = "abcd";

	for (int i = 0; s[i] == t[i]; ++i)
	{
		if (s[i] == '\0')
		{
			return 0;
		}
	}
	return s[i] - t[i];
}