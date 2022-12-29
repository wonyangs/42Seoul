/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonyang <wonyang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 19:40:46 by wonyang           #+#    #+#             */
/*   Updated: 2022/12/29 12:18:44 by wonyang          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>
#include "philo.h"

uint64_t	get_time(void)
{
	struct timeval	time;

	gettimeofday(&time, NULL);
	return (time.tv_sec * 1000000 + time.tv_usec);
}

void	pass_time(uint64_t start_time)
{
	uint64_t	now_time;

	now_time = get_time();
	printf("%llu", (now_time - start_time) / 1000);
}

void	msleep(uint64_t msec)
{
	uint64_t	start_time;
	uint64_t	now_time;

	start_time = get_time();
	now_time = get_time();
	while (start_time + msec * 1000 > now_time)
	{
		usleep(100);
		now_time = get_time();
	}
}
