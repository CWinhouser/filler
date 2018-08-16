/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 09:48:42 by ktwomey           #+#    #+#             */
/*   Updated: 2018/08/16 16:23:07 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# include "libft/libft.h"
# include "get_next_line/get_next_line.h"

typedef struct s_map
{
	int		x_map;
	int		y_map;
	int		x_dots;
	int		y_dots;
	char	**store;
} t_map;

typedef struct s_game
{
	char	**piece;
	char	**map;
	int		player;
	int		piece_x;
	int		piece_y;
	int		trim_x;
	int		trim_y;
	int		place_x;
	int		place_y;
} t_game;

t_game	ft_getplayer(t_game game);
t_map	ft_plateau(t_map map);
t_game	ft_map(t_game game);
t_game	ft_piece(t_game game);
void	ft_place(t_game game);
int	ft_convert(int i);
t_game ft_trim(t_game game);


#endif
