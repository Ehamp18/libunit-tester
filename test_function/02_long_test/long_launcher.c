/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_launcher.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 13:58:44 by elhampto          #+#    #+#             */
/*   Updated: 2019/05/19 14:07:53 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libunit.h"

int				long_test_launcher(void)
{
	t_unit_test	*testlist;

	ft_putstr("get_next_line: ");
	load_test(&testlist, "long test 01", &gnl_long_01);
	load_test(&testlist, "long test 02", &gnl_long_02);
	load_test(&testlist, "long test 03", &gnl_long_03);
	load_test(&testlist, "long test 04", &gnl_long_04);
	load_test(&testlist, "long test 05", &gnl_long_05);
	load_test(&testlist, "long test 06", &gnl_long_06);
	load_test(&testlist, "long test 07", &gnl_long_07);
	load_test(&testlist, "long test 08", &gnl_long_08);
	return (launch_tests(&testlist));
}
