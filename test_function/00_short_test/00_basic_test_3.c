/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_basic_test_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 15:28:41 by elhampto          #+#    #+#             */
/*   Updated: 2019/05/19 17:21:57 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libunit.h"
#include "../../get_next_line/get_next_line.h"

int			gnl_short_03(void)
{
	char	*real;
	char	*test;
	int		fd;
	int		fd2;

	fd = open("../tests/short3", O_RDONLY);
	fd2 = open("../tests/short3", O_RDONLY);
	gnl(fd, &real);
	get_next_line(fd2, &test);
	close(fd);
	close(fd2);
	if ((ft_strcmp(real, test) == 0))
		return (0);
	return (-1);
}
