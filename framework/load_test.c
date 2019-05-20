/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 18:14:38 by elhampto          #+#    #+#             */
/*   Updated: 2019/05/19 21:04:54 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libunit.h"

t_testlist		*inital(char *na, int (*test)(void))
{
	t_testlist	*tmp;

	if (!(tmp = (t_testlist*)malloc(sizeof(t_testlist))))
		return (NULL);
	tmp->name = na;
	tmp->f = test;
	tmp->next = NULL;
	return (tmp);
}

void			load_test(t_testlist **value, char *na, int (*test)(void))
{
	t_testlist	*tmp;

	if (*value == NULL)
		*value = inital(na, test);
	else
	{
		tmp = *value;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = inital(na, test);
	}
}
