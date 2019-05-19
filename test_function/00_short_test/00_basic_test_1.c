/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_basic_test_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 15:28:41 by elhampto          #+#    #+#             */
/*   Updated: 2019/05/18 18:09:08 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/libunit.h"

/*
** All the test will need to be edit, I will handle that in a few
*/

int			gnl_check_01(void)
{
	char	*real;
	char	*test;
	char	*line = NULL;
	char	*line2 = NULL;
	int		fd;
	int		fd2;
	int		val;

	fd = open("../tests/short1", O_RDONLY);
	fd2 = open("../tests/short1", O_RDONLY);
	if (!f)
		ft_putstr("Error: No function given");
	if (f)
	{
		gnl(fd, &line);
		real = (char*)&line;
		
		if ((val = ft_strcmp(real, test) == '0'))
			return (0);
	}
	return (-1);
}	
