/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 09:48:42 by ktwomey           #+#    #+#             */
/*   Updated: 2018/08/20 13:13:13 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# include "../includes/libft/libft.h"
# include "../includes/get_next_line/get_next_line.h"

typedef struct	s_map
{
	int			init;
	int			x_map;
	int			y_map;
	char		**store;
}				t_map;

typedef struct	s_game
{
	char		**piece;
	char		**map;
	int			enemy;
	int			player;
	int			piece_x;
	int			piece_y;
	int			place_x;
	int			place_y;
	int			score;
	int			topscore;
	int			oops;
	int			init;
}				t_game;

t_game			ft_getplayer(t_game game);
t_map			ft_plateau(t_map map);
t_game			ft_map(t_map map, t_game game);
t_game			ft_piece(t_game game);
t_game			ft_trim(t_game game);
int				ft_convert(t_game game, char c);
int				ft_overlap(t_game game, int i, int n);
int				ft_maploop(t_map map, t_game game);
int				ft_abs(int a, int b);
int				place(t_game game);
t_game			ft_score(int n, int i, t_map map, t_game);

#endif
