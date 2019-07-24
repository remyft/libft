/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 01:12:27 by rfontain          #+#    #+#             */
/*   Updated: 2019/07/25 01:18:02 by rfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char	*str;

	str = "Hello World";
	ft_putstr("La chaine est : ");
	ft_putendl(str);
	ft_putstr("Sa taille est de : ");
	ft_putnbr(ft_strlen(str));
	write(1, "\n", 1);
	return (0);
}
