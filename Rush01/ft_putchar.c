/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uyeniay <uyeniay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:43:49 by uyeniay           #+#    #+#             */
/*   Updated: 2024/01/28 22:59:34 by uyeniay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_f_putchar(int col)
{
	int	i;

	i = 1;
	while (i <= col)
	{
		if (i == 1)
			write (1, "/", 1);
		else if (i == col)
			write (1, "\\", 1);
		else
			write (1, "*", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_l_putchar(int col)
{
	int	i;

	i = 1;
	while (i <= col)
	{
		if (i == 1)
			write(1, "\\", 1);
		else if (i == col)
			write(1, "/", 1);
		else
			write(1, "*", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_m_putchar(int col)
{
	int	i;

	i = 1;
	while (i <= col)
	{
		if (i == 1 || i == col)
			write (1, "*", 1);
		else
			write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}
