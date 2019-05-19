/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 14:05:29 by rsmith            #+#    #+#             */
/*   Updated: 2019/05/10 16:24:32 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strcut(char *src, unsigned int i)
{
	unsigned int	n;
	char			*newstr;

	n = 0;
	newstr = 0;
	if (src[i] == '\n')
		i++;
	newstr = ft_strnew(ft_strlen(src) - i);
	while (src[i])
	{
		newstr[n] = src[i];
		i++;
		n++;
	}
	return (newstr);
}

t_list	*mind_stone(int vision, t_list **scarlet_witch)
{
	t_list *tmp;

	tmp = *scarlet_witch;
	if (!*scarlet_witch)
		return ((*scarlet_witch = ft_lstnew("", vision)));
	while (tmp)
	{
		if ((int)tmp->content_size == vision)
			return (tmp);
		tmp = tmp->next;
	}
	ft_lstadd(scarlet_witch, (tmp = ft_lstnew("", vision)));
	return (tmp);
}

void	ten_second_tidy(int i, char **line, t_list *page)
{
	char	*temp;

	*line = ft_strnew(i);
	ft_strncpy(*line, page->content, i);
	temp = ft_strcut(page->content, i);
	free(page->content);
	page->content = ft_strdup(temp);
	free(temp);
}

int		get_next_line(const int fd, char **line)
{
	static t_list	*list;
	t_list			*page;
	char			*tmp;
	char			swole[BUFF_SIZE + 1];
	int				i;

	WRONG(fd < 0);
	page = mind_stone(fd, &list);
	if (!ft_strchr(page->content, '\n'))
	{
		while ((i = read(fd, swole, BUFF_SIZE)) > 0)
		{
			swole[i] = '\0';
			tmp = ft_strjoin(page->content, swole);
			free(page->content);
			page->content = tmp;
			BREAK(ft_strchr(swole, '\n'));
		}
		DONE(i < 1 && !ft_strlen(page->content));
	}
	i = 0;
	while (((char *)page->content)[i] && ((char *)page->content)[i] != '\n')
		i++;
	ten_second_tidy(i, line, page);
	return (1);
}
