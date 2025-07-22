/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 12:42:30 by pecastro          #+#    #+#             */
/*   Updated: 2025/07/12 12:42:38 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4096 //compile with -D BUFFER_SIZE=n
# endif

char	*get_next_line(int fd);
char	*file_reader(char *storing_buffer, int fd);
char	*buffer_joiner(char *storing_buffer, char *reading_buffer);
char	*line_cutter(char *storing_buffer);
char	*storage_updater(char *storing_buffer);
char	*ft_substr_new(const char *s, unsigned int start, size_t len);

#endif
