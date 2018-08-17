/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 11:28:40 by ktwomey           #+#    #+#             */
/*   Updated: 2018/08/17 16:08:10 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"
#include <fcntl.h>
#include <stdio.h>

int	main (void)
{
	t_game	game;
	t_map	map;

	game.init = 0;
	map.init = 0;
	game = ft_getplayer(game);
	while(1)
	{
		map = ft_plateau(map);
		game = ft_map(map, game);
		game = ft_piece(game);
		if(ft_place(map, game) == 0)
			break;
	}
	dprintf(2, "Fuck you");
	return(0);
}
