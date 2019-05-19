/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test_5.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 01:21:20 by elhampto          #+#    #+#             */
/*   Updated: 2019/05/19 01:21:26 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

/*
** All the test will need to be edit, I will handle that in a few
*/

int			gnl_check_01(void)
{
	char	*real;
	char	*test;
	int		fd;
	int		fd2;

	fd = open("../tests/long5", O_RDONLY);
	fd2 = open("../tests/long5", O_RDONLY);
	gnl(fd, &real);
	get_next_line(fd2, &test);
	close(fd);
	close(fd2);
	if ((ft_strcmp(real, test) == 0))
		return (0);
	return (-1);
}