/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_basic_test_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 15:28:41 by elhampto          #+#    #+#             */
/*   Updated: 2019/05/18 17:56:29 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/libunit.h"

int			gnl_check_01(char (*f)(int, char**))
{
	char	*real;
	char	*test;
	char	*line = NULL;
	char	*line2 = NULL;
	int		fd;
	int		fd2;
	int		val;

	fd = open("../tests/short2", O_RDONLY);
	fd2 = open("../tests/short2", O_RDONLY);
	if (!f)
		ft_putstr("Error: No function given");
	if (f)
	{
		get_next_line(fd, &line);
		real = (char*)&line;
		
		f(fd2, &line2);
		test = (char*)&line2;
		
		if ((val = ft_strcmp(real, test) == '0'))
			return (0);
	}
	return (-1);
}	
