#include <stdio.h>

int main(void)
{
	char c = 'a';
	int i;

	while (c <= 'z')

		for (i = 1; i <= 100; i++)
	{
		printf("%c\t%d\n",c,i);
		c++;
	}
	return (0);
}
