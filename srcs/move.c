/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 09:48:31 by ktwomey           #+#    #+#             */
/*   Updated: 2018/08/17 16:18:16 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "filler.h"

int		ft_maploop(t_map map, t_game game)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (i < map.y_map - game.piece_y)
	{
		n = 0;
		while (n < map.x_map - game.piece_x)
		{
			if (ft_overlap(game, i, n) == 1)
			{
				ft_putnbr(i);
				ft_putchar(' ');
				ft_putnbr(n);
				ft_putchar('\n');
				return (1);
			}
			n++;
		}
		i++;
	}
	return (0);
}

int		ft_overlap(t_game game, int i, int n)
{
	int	a;
	int	b;
	int	over;

	a = 0;
	b = 0;
	over = 0;
	while (a < game.piece_y)
	{
		b = 0;
		while (b < game.piece_x)
		{
			if (game.piece[a][b] == '*')
			{
				if (ft_convert(game, game.map[i + a][n + b]) == game.player)
					over++;
				else if (ft_convert(game, game.map[i + a][n + b]) == game.enemy)
					return (0);
			}
			b++;
		}
		a++;
	}
	return (over);
}

int		ft_convert(t_game game, char c)
{
	if (game.player == 1 && c == '*')
		return (1);
	if (game.player == 2 && c == '*')
		return (2);
	if (c == 'x' || c == 'X')
		return (1);
	if (c == 'o' || c == 'O')
		return (2);
	return (0);
}
