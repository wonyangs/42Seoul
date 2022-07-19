/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonyang <wonyang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 03:22:52 by wonyang           #+#    #+#             */
/*   Updated: 2022/07/19 20:00:37 by wonyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *str, int c);
char	*ft_strndup(const char *str, size_t len);

char	*low_read(char **cache, char buffer[]);
char	*make_new_line_sub(char **cache, char buffer[], char *nxt_chr);
int		make_new_line(char **cache, char buffer[], char **result);
char	*get_next_line(int fd);

#endif
