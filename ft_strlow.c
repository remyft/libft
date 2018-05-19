#include "libft.h"

void	ft_strlow(char *str, size_t size)
{
	size_t i;

	while (i < size)
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
}
