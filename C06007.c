#include<stdio.h>

#include<string.h>
#define max 100
char XoaTu (char s[], char s1[])
{
	int len = strlen (s);
	int len2 = strlen (s1);
	int i;
	for (i = 0; i < len; i++)
	{
		if ((s[i] == s1[0]) && (s[i + len2 - 1] == s1[len2 - 1]))
		{
			int j;
			for (j = i; j < len; j++)
			{
				s[j] = s[j + len2];
			}
			s[j + len2] = '\0';
		}
	}
	printf("%s",s);
}
int main ()
{
	char s[max];
	char s2[max];
	int a[max];
	gets (s);
	gets (s2);
	XoaTu (s, s2);
}
