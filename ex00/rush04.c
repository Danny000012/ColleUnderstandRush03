/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmadau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 16:03:26 by tmadau            #+#    #+#             */
/*   Updated: 2018/01/14 16:04:48 by tmadau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putx(int x, char start, char mid, char end);

void	rush(int x, int y)
{
	int		i;

	i = 1;
	if (x > 0 && y > 0)
	{
		while (i <= y)
		{
			if (i == 1)
			{
				ft_putx(x, 'A', 'B', 'C');
			}
			else if (i == y)
			{
				ft_putx(x, 'C', 'B', 'A');
			}
			else
				ft_putx(x, 'B', ' ', 'B');
			ft_putchar('\n');
			i++;
		}
	}
}

void	ft_putx(int x, char start, char mid, char end)
{
	int		i;

	i = x;
	while (i >= 0)
	{
		if (i == x)
		{
			ft_putchar(start);
		}
		else if (i > 1 && i < x)
			ft_putchar(mid);
		if (i == 1 && x != 1)
			ft_putchar(end);
		i--;
	}
}
