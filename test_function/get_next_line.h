/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 15:24:37 by rsmith            #+#    #+#             */
/*   Updated: 2019/05/18 21:39:11 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "../../libft/libft.h"
# define BUFF_SIZE 9999

# define WRONG(x)   if (x) return (-1)
# define DONE(x)   if (x) return (i)
# define BREAK(x)   if (x) break

int		get_next_line(const int fd, char **line);

#endif
