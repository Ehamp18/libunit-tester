/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_launcher.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 13:58:44 by elhampto          #+#    #+#             */
/*   Updated: 2019/05/19 19:48:40 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libunit.h"

int				long_test_launcher(void)
{
	t_testlist	*list;

	ft_putstr("get_next_line: ");
	load_test(&list, "long test 01", &gnl_long_01);
	load_test(&list, "long test 02", &gnl_long_02);
	load_test(&list, "long test 03", &gnl_long_03);
	load_test(&list, "long test 04", &gnl_long_04);
	load_test(&list, "long test 05", &gnl_long_05);
	load_test(&list, "long test 06", &gnl_long_06);
	load_test(&list, "long test 07", &gnl_long_07);
	load_test(&list, "long test 08", &gnl_long_08);
	return (launch_tests(&list));
}
