/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test_7.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 00:59:37 by elhampto          #+#    #+#             */
/*   Updated: 2019/05/19 17:23:45 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libunit.h"
#include "../../get_next_line/get_next_line.h"

int			gnl_medium_07(void)
{
	char	*real;
	char	*test;
	int		fd;
	int		fd2;

	fd = open("../tests/medium7", O_RDONLY);
	fd2 = open("../tests/medium7", O_RDONLY);
	gnl(fd, &real);
	get_next_line(fd2, &test);
	close(fd);
	close(fd2);
	if ((ft_strcmp(real, test) == 0))
		return (0);
	return (-1);
}
