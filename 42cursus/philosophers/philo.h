/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonyang <wonyang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:45:03 by wonyang           #+#    #+#             */
/*   Updated: 2022/12/26 18:29:29 by wonyang          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

typedef struct s_info
{
	int	p_count;
	int	life_time;
	int	eat_time;
	int	sleep_time;
	int	eat_num;
}	t_info;

// libft.c
int	ft_atoi(const char *str);

// ft_isinteger.c
int	ft_isinteger(char *str);

// parse.c
int	parse_argument(t_info *info, int argc, char **argv);

#endif
