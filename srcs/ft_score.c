/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_score.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 11:08:55 by ktwomey           #+#    #+#             */
/*   Updated: 2018/08/20 13:37:33 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "filler.h"

int		ft_abs(int a, int b)
{
	if (a < b)
		return (a - b);
	else
		return (b - a);
}

t_game	ft_score(int n, int i, t_map map, t_game game)
{
	int		mid_h;
	int		mid_w;

	mid_h = map.y_map / 2;
	mid_w = map.x_map / 2;
	game.score = 2000 + (ft_abs(mid_h, i) -	ft_abs(mid_w, n));
	if (game.topscore < game.score)
	{
		game.topscore = game.score;
		game.place_x = i;
		game.place_y = n;
	}
	return (game);
}
