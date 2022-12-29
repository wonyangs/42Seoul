/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonyang <wonyang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 19:41:27 by wonyang           #+#    #+#             */
/*   Updated: 2022/12/29 15:10:14 by wonyang          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "philo.h"

t_fork	*init_fork_arr(int n)
{
	t_fork	*fork_arr;
	int		i;

	fork_arr = (t_fork *)malloc(sizeof(t_fork) * (n + 1));
	i = 1;
	while (i < n + 1)
	{
		fork_arr[i].status = 1;
		fork_arr[i].mutex = init_mutex();
		i++;
	}
	return (fork_arr);
}

t_philo	*init_philo_arr(t_info *info, t_fork *fork_arr)
{
	t_philo	*philo_arr;
	int		i;
	int		n;

	n = info->philo_num;
	philo_arr = (t_philo *)malloc(sizeof(t_philo) * (n + 1));
	i = 1;
	while (i < n + 1)
	{
		philo_arr[i].id = i;
		philo_arr[i].last_eat_time = get_time();
		philo_arr[i].left_fork = fork_arr + i;
		philo_arr[i].right_fork = fork_arr + (i % n + 1);
		philo_arr[i].info = info;
		i++;
	}
	return (philo_arr);
}

pthread_mutex_t	*init_mutex(void)
{
	pthread_mutex_t	*mutex;

	mutex = (pthread_mutex_t *)malloc(sizeof(pthread_mutex_t));
	pthread_mutex_init(mutex, NULL);
	return (mutex);
}

t_info	*init_info(void)
{
	t_info	*info;

	info = (t_info *)malloc(sizeof(t_info));
	info->is_dead = 0;
	info->start_time = get_time();
	info->print_mutex = init_mutex();
	return (info);
}

#include <stdio.h>

int	init_arg(t_arg *arg, int argc, char **argv)
{
	arg->info = init_info();
	if (parse_argument(arg->info, argc, argv) == -1)
	{
		printf("argument infomation error\n");
		return (-1);
	}
	arg->fork_arr = init_fork_arr(arg->info->philo_num);
	arg->philo_arr = init_philo_arr(arg->info, arg->fork_arr);
	return (0);
}
