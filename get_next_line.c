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

int	get_next_line(const int fd, char **line)
{
	char	buf[BUFF_SIZE + 1];

	if (fd < 0 || !line)
		return (-1);
	return (1);
}