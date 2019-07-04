/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 11:37:28 by hbarnard          #+#    #+#             */
/*   Updated: 2019/06/26 11:37:29 by hbarnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ccpy(char **line, char *content, char c)
{
	int	i;

	i = poschr(content, c);
	if (!(*line = ft_strndup(content, i)))
		return (0);
	return (i);
}

t_list	*cur_lst(const int fd, t_list **readlist)
{
	t_list	*temp;

	if (!readlist)
		return	(NULL);
	tmp = *readlist;
	while (temp)
	{
		if (temp->content_size == fd)
			return (temp);
		temp = temp->next;
	}
	temp = ft_lstnew("", fd);
	ft_lstadd(hlist, temp);
	return (temp);
}

int	get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	static t_list	*readlist;
	int		suc;
	char		*temp;
	t_list		*cur;

	if (fd < 0 || !line || read(fd,buf,50) < 0 || (!(cur = cur_lst(fd, &readlist))))
		return (-1);
	
	return (1);
}
