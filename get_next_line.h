/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 10:26:18 by hbarnard          #+#    #+#             */
/*   Updated: 2019/06/25 10:51:50 by hbarnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft"
# include <stdlib.h>
# include <unistd.h>

# define BUFF_SIZE 10

int get_next_line(const int fd, char **line);

#endif
