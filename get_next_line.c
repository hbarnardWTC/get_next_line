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

t_list	*curr_lst(const int fd, t_list **readlist)
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

int		read_loop(const int fd, char **content)
{
	int		res;
	char	*removal;
	char	buf[BUFF_SIZE + 1];

	while ((res = read(fd, buf, BUFF_SIZE)))
	{
		buf[res] = '\0';
		removal = *content;
		if (!(*content = ft_strjoin(*content, buf)))
			return (-1);
		free(removal);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	return (res);
}

int	get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	static t_list	*readlist;
	int				suc;
	char			*temp;
	t_list			*curr;

	if (fd < 0 || !line || read(fd,buf,50) < 0 || (!(curr = curr_lst(fd, &readlist))))
		return (-1);
	temp = curr->content;
	suc = read_loop(fd,&temp);
	curr->content = temp;
	if (temp[suc] != '\0')
	{
		curr->content = ft_strdup(&(curr->content[res + 1]));
		free(temp);
	}
	else
		tmp[0] = '\0';
	return (1);
}
