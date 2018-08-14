/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 09:48:31 by ktwomey           #+#    #+#             */
/*   Updated: 2018/08/13 14:50:39 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

/* read */
void	ft_read(char **str)
{
	t_game		map;
	static int	n;
	char		*line = NULL;

	n = 0;
	while (get_next_line(0, &line)  > 0 && !(ft_strchr(line, "Piece")))
	{
		if (ft_strchr(line, "$$$ exec"))
			ft_player(line);
		if (ft_strchr(line, "Plateau"))
			ft_size(line);
		if (ft_strchr(line, ft_itoa(n)" "))
		{
			map.map[n] = ft_strchr(line, " ") + 1;
			n++;
		}
	ft_piece;
	}
}

/* Player */
void	ft_player(char *str)
{
	t_game		player;

	if(strchr(str, "p1"))
		player.player = 0;
	if(strchr(str, "p2"))
		player.player = 1;
}

/* map size */
void	ft_size(char *str)
{
	t_map		size;
	t_game		map;
	char		*store = NULL;

	store = ft_strsplit(str, ' ');
	size.y_map = itoa(store[1]);
	size.x_map = itoa(store[2]);
	map.map = (char**)malloc(size.x_map + 1 * size.y_map + 1);
}

/* map */
/*void	ft_map(char *str)
{
	t_game		map;
	t_map		size;
	static int	i;

	i = 0;
	map.map = (char**)malloc(size.x_map + 1 * size.y_map + 1);
	map.map[i] = str;
	i++;		
}*/

/* Piece */
void	ft_piece(void)
{
	t_game		piece;
	char		*store = NULL;
	char		*line;
	int		i;

	i = 0;
	while(get_next_line(0, &line) > 0 && ft_strchr(line, "Piece"))
	{
		if(ft_strchr(line, "Piece"))
		{
			store = ft_strsplit(line, ' ');
			map.piece_y = itoa(store[1]);
			map.piece_x = itoa(store[2]);
			map.piece = (char**)malloc(map.piece_x + 1 * map.piece_y + 1);
		}
	}
	while(get_next_line(0, &line) > 0 && !(ft_strchr(line, "Piece")))
	{
		piece.piece[i] = ft_strjoin(piece.piece[i], line);
		i++;
	}
}

/* Position available */
void	ft_find(void)
{
	t_game		game;
	t_map		size;
	int		inner;
	int		outer;

	inner = 0;
	outer = 0;
	while(outer >= size.y_map)
	{
		while(inner
}

void	ft_overlap(void)
{
}

void	ft_pastdot(char *str)
{
}

void	ft_finalcheck(void)
{
}

char	filler(char **str)
{
}
