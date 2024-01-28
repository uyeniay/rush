/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uyeniay <uyeniay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:23:47 by uyeniay           #+#    #+#             */
/*   Updated: 2024/01/28 23:07:26 by uyeniay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_f_putchar(int col);
void	ft_l_putchar(int col);
void	ft_m_putchar(int col);

void	rush(int col, int row)
{
	int	i;

	i = 1;
	if (col > 0 || row > 0)
	{
		while (i <= row)
		{
			if (i == 1)
				ft_f_putchar (col);
			else if (i == row)
				ft_l_putchar (col);
			else
				ft_m_putchar (col);
			i++;
		}
	}
	else
		write(1, "fku\n", 5);
}
