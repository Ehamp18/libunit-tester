/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_launcher.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 13:59:06 by elhampto          #+#    #+#             */
/*   Updated: 2019/05/19 14:17:21 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libunit.h"

int				extra_test_launcher(void)
{
	t_unit_test	*testlist;

	ft_putstr("get_next_line: ");
	load_test(&testlist, "extra test 01", &gnl_extra_01);
	load_test(&testlist, "extra test 02", &gnl_extra_02);
	load_test(&testlist, "extra test 03", &gnl_extra_03);
	return (launch_tests(&testlist));
}
