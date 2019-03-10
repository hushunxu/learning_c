#include <stdio.h>

int main()
{
	char s[] = "ab";
	char t[] = "abcd";
	strcmp(*s, *t);
}

int strcmp(char *s, char *t)
{
	int i;
	for (int i = 0; s[i] == t[i]; i++)
	{
		if (s[i] == '\0')
		{
			return 0;
		}
		// printf("%d\n", i);

	}
	// printf("%s", s[i]);
	return s[i] - t[i];
}