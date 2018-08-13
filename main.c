/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 11:28:40 by ktwomey           #+#    #+#             */
/*   Updated: 2018/08/13 14:50:49 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"
#include <fcntl.h>
#include <stdio.h>

int	main (void)
{
	int		ret;
	int		count;
	char	*line = NULL;
	char	**map;

	count = 0;
	ret = 1;
	map = (char**)malloc(sizeof(map) *(100));
	while (ret > 0)
	{
		//dprintf(2, "\n\n\n<<TEST>>\n\n\n");
		ret = get_next_line(0, &line);
		//dprintf(2, "%d\n", ret);
		map[count] = ft_strjoin(map[count], line);
		//dprintf(2, "%s", line);
		//dprintf(2, "\n\n\nLINE: <<<%s>>>\n\n\n", line);
		//dprintf(2, "\n\n\nMAP[count]: <<<%s>>>\n\n\n", map[count]);
		count++;
	}
	//dprintf(2, "\n\n\nMAP[count]: <<<%s>>>\n\n\n", map[count]);
	map[count] = NULL;
	return(0);
}
