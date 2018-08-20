/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 09:48:31 by ktwomey           #+#    #+#             */
/*   Updated: 2018/08/20 13:04:11 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "filler.h"

t_game	ft_getplayer(t_game game)
{
	char	*line;

	line = NULL;
	get_next_line(0, &line);
	if (line[10] == '1')
	{
		game.enemy = 1;
		game.player = 2;
	}
	else
	{
		game.player = 1;
		game.enemy = 2;
	}
	return (game);
}

t_map	ft_plateau(t_map map)
{
	char	*line;

	line = NULL;
	get_next_line(0, &line);
	map.store = ft_strsplit(line, ' ');
	map.x_map = ft_atoi(map.store[2]);
	map.y_map = ft_atoi(map.store[1]);
	return (map);
}

t_game	ft_map(t_map map, t_game game)
{
	int		i;
	char	*line;

	line = NULL;
	i = 0;
	game.map = (char**)malloc(sizeof(char*) * map.y_map + 1);
	get_next_line(0, &line);
	while (1)
	{
		get_next_line(0, &line);
		if (line[0] == 'P')
			break ;
		game.map[i] = ft_strchr(line, ' ') + 1;
		i++;
	}
	map.store = ft_strsplit(line, ' ');
	game.piece_x = ft_atoi(map.store[2]);
	game.piece_y = ft_atoi(map.store[1]);
	return (game);
}

t_game	ft_piece(t_game game)
{
	int		i;
	char	*line;

	line = NULL;
	i = 0;
	game.piece = (char**)malloc(sizeof(char*) * game.piece_y + 1);
	while (i < game.piece_y)
	{
		get_next_line(0, &line);
		game.piece[i] = line;
		i++;
	}
	i = 0;
	return (game);
}
