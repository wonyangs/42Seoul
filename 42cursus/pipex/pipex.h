/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonyang <wonyang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:05:24 by wonyang           #+#    #+#             */
/*   Updated: 2022/10/12 19:20:38 by wonyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/wait.h>
# include "libft/libft.h"

// parse_path.c
char	*make_cmd_path(char *cmd_name, char **envp);

// execve.c
int		run_execve(char *cmd, char **envp);

// utils.c
char	**parse_cmd(char *cmd);

// exit.c
void	perror_exit(char *msg);
void	error_exit(char *msg);

#endif
