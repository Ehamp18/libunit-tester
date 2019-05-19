/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:52:25 by elhampto          #+#    #+#             */
/*   Updated: 2019/05/19 02:28:47 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBUNIT_H__
# define __LIBUNIT_H__

/* Currently using both my GNL and lib, we can use yours if you want*/
# include "../libft/libft.h"
# include "../libft/gnl.h"


/* Some macros to help us make it readable*/
# define ERROR(x) if (x) return (-1);
# define ZERO(x) if (x) return (0);
# define ERROR_TOFEW "Error: To few parameters"

#endif
