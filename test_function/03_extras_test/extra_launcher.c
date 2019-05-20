/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_launcher.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 13:59:06 by elhampto          #+#    #+#             */
/*   Updated: 2019/05/19 19:49:06 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libunit.h"

int				extra_test_launcher(void)
{
	t_testlist	*list;

	ft_putstr("get_next_line: ");
	load_test(&list, "extra test 01", &gnl_extra_01);
	load_test(&list, "extra test 02", &gnl_extra_02);
	load_test(&list, "extra test 03", &gnl_extra_03);
	return (launch_tests(&list));
}
