/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launcher.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 17:43:52 by elhampto          #+#    #+#             */
/*   Updated: 2019/05/19 21:05:35 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libunit.h"

int				fork_call(int (*f)(void))
{
	pid_t		pid;

	pid = fork();
	if (pid < 0)
		return (-1);
	else if (pid == 0)
	{
	}
	return (0);
}

int				luan(t_testlist *lists)
{
	while (lists)
	{
		fork_call(lists->f);
		lists = lists->next;
	}
	return (0);
}
