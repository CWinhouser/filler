/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 09:48:31 by ktwomey           #+#    #+#             */
/*   Updated: 2018/08/15 16:05:18 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "filler.h"
#include "libft/libft.h"

/* Get Player */
void	ft_getplayer(void)
{
	t_game	player;
	char	*line = NULL;

	get_next_line(0, &line);
	if(line[10] == '1')
		player.player = 1;
	else
		player.player = 2;
}

/* Get Plateau */
void	ft_plateau(void)
{
	t_map	map;
	char	*line = NULL;
	char	**store = NULL;
	
	get_next_line(0, &line);
	store = ft_strsplit(line, ' ');
	map.x_map = ft_atoi(store[2]);
	map.y_map = ft_atoi(store[1]);
}

/* Get Map */
void	ft_map(void)
{
	int		i;
	char	*line = NULL;
	t_game	map;
	t_map	size;

	i = 0;
	map.map = (char**)malloc(size.y_map + 1 * size.x_map + 1);
	while(1)
	{
		get_next_line(0, &line);
		if(line[0] == 'P')
			break;
		if(ft_strchr(line, ' '))
			map.map[i] = ft_strchr(line, ' ') + 1;
		dprintf(2, "%s\n\n\n", map.map[i]);
		i++;
	}
}

/* Get Piece */

/* Place */
