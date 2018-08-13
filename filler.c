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
	int		count;
	char	*line = NULL;
	char	**map;

	count = 0;
	map = (char**)malloc(sizeof(map) * (100));
	while (get_next_line(0, &line)  > 0)
	{
		map[count] = ft_strjoin(map[count], line);
		if (ft_strchr(line, "$$$ exec"))
			ft_player(line);
		if (ft_strchr(line, "Plateau"))
			ft_size(line);
		count++;
	}
	map[count] = NULL;
}

/* Player */
void	ft_player(char *str)
{
	t_game		player;

	if(strchr(str, "p1"))
		player.player = 0;
	if(strchr(str, "p2"))
		player.player = 1;
	player.player = 0;
}

/* map size */
void	ft_size(char *str)
{
	t_map		size;
	char		**store = NULL;

	store = ft_strsplit(str, ' ');
	size.y_map = itoa(store[1]);
	size.x_map = itoa(store[2]);
}

/* map */
void	ft_map(char **str)
{
}

/* Piece */
void	ft_piece(char **str)
{
}

/* Position available */
void	ft_overlap(char **str)
{
}

void	ft_pastdot(char **str)
{
}

void	ft_finalcheck(char **str)
{
}

char	filler(char **str)
{
}
