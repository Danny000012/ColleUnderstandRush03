/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmadau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 14:27:31 by tmadau            #+#    #+#             */
/*   Updated: 2018/01/14 12:13:08 by tmadau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putx(int x, char end, char mid);

void	rush(int x, int y)
{
	int		i;

	i = 1;
	if (y > 0 && x > 0)
	{
		while (i <= y)
		{
			if (i == 1)
			{
				ft_putx(x, 'A', 'B');
			}
			else if (i == y)
			{
				ft_putx(x, 'C', 'B');
			}
			else
				ft_putx(x, 'B', ' ');
			ft_putchar('\n');
			i++;
		}
	}
}

void	ft_putx(int x, char end, char mid)
{
	int		i;

	i = x;
	ft_putchar(end);
	i--;
	while (i >= 0)
	{
		if (i == 1)
		{
			ft_putchar(end);
		}
		else if (i > 1)
			ft_putchar(mid);
		i--;
	}
}
