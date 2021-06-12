#include "libft.h"

#include <stdio.h>

int	main()
{
	char str[] = "BlockDMask";
	char* ptr = ft_strchr(str, 'M'); //알파벳 M을 찾음
	if(ptr != NULL)
	{
		printf("%c, %s", *ptr, ptr);
	}
	return 0;
}
