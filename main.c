/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 11:28:40 by ktwomey           #+#    #+#             */
/*   Updated: 2018/08/16 15:57:24 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"
#include <fcntl.h>
#include <stdio.h>

int	main (void)
{
	t_game	game;
	char	val;
	t_map	map;
	int		i;
	int		n;

	i = 0;
	n = 5;
	game = ft_getplayer(game);
	while(1)
	{
		map = ft_plateau(map);
		game = ft_map(game);
		game = ft_piece(game);
//		ft_place(game);
//		ft_place(game);
//		if(ft_place(game) == 0)
//		{
//			break;
//		}
		ft_place(game);
	}
	return(0);
}
