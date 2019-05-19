/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:52:25 by elhampto          #+#    #+#             */
/*   Updated: 2019/05/19 14:10:29 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include "../libft/libft.h"

# define ERROR(x) if (x) return (-1);
# define ZERO(x) if (x) return (0);
# define ERROR_TOFEW "Error: To few parameters"

/*
** Short tests
*/
int			gnl_short_01(void);
int			gnl_short_02(void);
int			gnl_short_03(void);
int			gnl_short_04(void);
int			gnl_short_05(void);
int			gnl_short_06(void);
int			gnl_short_07(void);
int			gnl_short_08(void);

/*
** Medium tests
*/
int			gnl_medium_01(void);
int			gnl_medium_02(void);
int			gnl_medium_03(void);
int			gnl_medium_04(void);
int			gnl_medium_05(void);
int			gnl_medium_06(void);
int			gnl_medium_07(void);
int			gnl_medium_08(void);

/*
** Long tests
*/
int			gnl_long_01(void);
int			gnl_long_02(void);
int			gnl_long_03(void);
int			gnl_long_04(void);
int			gnl_long_05(void);
int			gnl_long_06(void);
int			gnl_long_07(void);
int			gnl_long_08(void);

/*
** Extra tests
*/
int			gnl_extra_01(void);
int			gnl_extra_02(void);
int			gnl_extra_03(void);

#endif
