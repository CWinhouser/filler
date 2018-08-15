/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 09:48:42 by ktwomey           #+#    #+#             */
/*   Updated: 2018/08/15 16:02:08 by ktwomey          ###   ########.fr       */
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
	char	**piece;
	char	**map;
	int	player;
	int	piece_x;
	int	piece_y;
} t_game;

void	ft_getplayer(void);
void	ft_plateau(void);
void	ft_map(void);

#endif
