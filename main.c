/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 11:28:40 by ktwomey           #+#    #+#             */
/*   Updated: 2018/07/24 09:46:18 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"
#include <fcntl.h>
#include <stdio.h>

int	main (int ac, char **av)
{
	(void)ac;
	int		fd;
	int		i;
	int		count;
	int		ret;
	char	*line = NULL;
	char	*map[50];

	count = 0;
	if ((fd = open(av[1], O_RDONLY, 0700)) == -1)
   {
       printf("could not open file\n");
       return (0);
   }
	while ((ret = get_next_line(fd, &line)) > 0)
	{
		map[count] = ft_strnew(0);
		map[count] = ft_strjoin(map[count], line);
		//printf("%s\n", map[count]);
		count++;
	}
	map[count] = NULL;
	filler(map);
	//printf("%s", map[--count]);
}
