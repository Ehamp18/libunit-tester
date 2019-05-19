/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:48:32 by elhampto          #+#    #+#             */
/*   Updated: 2019/05/19 14:11:47 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libunit.h"

int			main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac != 2)
		ft_putstr(ERROR_TOFEW);
	else
	{
		if (*av[1])
		{}
	}
	return (0);
}
