/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 09:48:31 by ktwomey           #+#    #+#             */
/*   Updated: 2018/08/16 16:23:05 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "filler.h"
#include "libft/libft.h"

/* Get Player */
t_game	ft_getplayer(t_game game)
{
	char	*line = NULL;

	get_next_line(0, &line);
	if(line[10] == '1')
		game.player = 1;
	else
		game.player = 2;
	return(game);
}

/* Get Plateau */
t_map	ft_plateau(t_map map)
{
	char	*line = NULL;
	
	get_next_line(0, &line);
	map.store = ft_strsplit(line, ' ');
	map.x_map = ft_atoi(map.store[2]);
	map.y_map = ft_atoi(map.store[1]);
	return(map);
}

/* Get Map */
t_game	ft_map(t_game game)
{
	int		i;
	char	*line = NULL;
	t_map	size;

	i = 0;
	game.map = (char**)malloc(sizeof(char*) * size.y_map + 1);
	while(1)
	{
		get_next_line(0, &line);
		if(line[0] == 'P')
			break;
		if(ft_strchr(line, ' '))
			game.map[i] = ft_strsub(line, 4, size.x_map) + 1;
		i++;
	}
	size.store = ft_strsplit(line, ' ');
    game.piece_x = ft_atoi(size.store[2]);
    game.piece_y = ft_atoi(size.store[1]);
	return(game);
}

/* Get Piece */
t_game	ft_piece(t_game game)
{
	int		i;
	char	*line = NULL;

	i = 0;
    game.piece = (char**)malloc(sizeof(char*) * game.piece_y + 1);
	while (i < game.piece_y)
	{
		get_next_line(0, &line);	
		game.piece[i] = *(&line);
		i++;
	}
	i = 0;
	return(game);
}
	
/* Place */
int		ft_place(t_game game)
{
	int		inner;
	int		outer;

	inner = 0;
	outer = 0;
	ft_trim_x(game.piece);
	ft_trim_y(game.piece);
	while
}

t_game	ft_trim_x(t_game game)
{
	int		inner;
	int		outer;

	inner = 0;
	outer = 0;
	while
}

t_game	ft_trim(t_game game)
{
	int		inner;
	int		outer;

	inner = 0;
	outer = 0;
	while
}

