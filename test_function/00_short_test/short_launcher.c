/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_launcher.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 02:28:15 by elhampto          #+#    #+#             */
/*   Updated: 2019/05/19 14:08:07 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libunit.h"

int				short_test_launcher(void)
{
	t_unit_test	*testlist;

	ft_putstr("get_next_line: ");
	load_test(&testlist, "short test 01", &gnl_short_01);
	load_test(&testlist, "short test 02", &gnl_short_02);
	load_test(&testlist, "short test 03", &gnl_short_03);
	load_test(&testlist, "short test 04", &gnl_short_04);
	load_test(&testlist, "short test 05", &gnl_short_05);
	load_test(&testlist, "short test 06", &gnl_short_06);
	load_test(&testlist, "short test 07", &gnl_short_07);
	load_test(&testlist, "short test 08", &gnl_short_08);
	return (launch_tests(&testlist));
}
