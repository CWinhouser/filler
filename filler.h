/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 09:48:42 by ktwomey           #+#    #+#             */
/*   Updated: 2018/08/13 14:50:52 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# include "libft/libft.h"
# include "get_next_line/get_next_line.h"

typedef struct s_map
{
	int	x_map;
	int	y_map;
} t_map;

typedef struct s_game
{
	char	**map;
	int		player;
} t_game;	 

char	*filler();

#endif
