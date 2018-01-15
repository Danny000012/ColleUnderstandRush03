/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmadau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 13:10:04 by tmadau            #+#    #+#             */
/*   Updated: 2018/01/14 18:05:21 by dseabela         ###   ########.fr       */
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
				ft_putx(x, 'o', '-');
			}
			else if (i == y)
			{
				ft_putx(x, 'o', '-');
			}
			else
				ft_putx(x, '|', ' ');
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
