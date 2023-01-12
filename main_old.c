#include "libft.h"
#include <stdio.h>

int main(void)
{

	char **res;
	char *str1 = {"He eu llo Wp   orld"};


	res = ft_split(str1, ' ');

	for (char **ptr = res; *ptr != NULL; ++ptr)
	{
		printf("%c | ", *(*ptr + 1));
		printf("%s\n", *ptr);
	}
	return 0;
}