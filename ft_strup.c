#include "libft.h"

void	ft_strup(char *str, size_t size)
{
	size_t i;

	while (i < size)
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}
