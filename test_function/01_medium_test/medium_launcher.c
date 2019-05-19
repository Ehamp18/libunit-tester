/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_launcher.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 13:57:56 by elhampto          #+#    #+#             */
/*   Updated: 2019/05/19 14:08:34 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libunit.h"

int				medium_test_launcher(void)
{
	t_unit_test	*testlist;

	ft_putstr("get_next_line: ");
	load_test(&testlist, "medium test 01", &gnl_medium_01);
	load_test(&testlist, "medium test 02", &gnl_medium_02);
	load_test(&testlist, "medium test 03", &gnl_medium_03);
	load_test(&testlist, "medium test 04", &gnl_medium_04);
	load_test(&testlist, "medium test 05", &gnl_medium_05);
	load_test(&testlist, "medium test 06", &gnl_medium_06);
	load_test(&testlist, "medium test 07", &gnl_medium_07);
	load_test(&testlist, "medium test 08", &gnl_medium_08);
	return (launch_tests(&testlist));
}
