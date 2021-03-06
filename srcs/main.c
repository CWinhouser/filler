/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 11:28:40 by ktwomey           #+#    #+#             */
/*   Updated: 2018/08/20 13:12:20 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	t_game	game;
	t_map	map;

	game.init = 0;
	map.init = 0;
	game = ft_getplayer(game);
	while (1)
	{
		map = ft_plateau(map);
		game = ft_map(map, game);
		game = ft_piece(game);
		if (ft_maploop(map, game) == 0)
			break ;
	}
	return (0);
}
