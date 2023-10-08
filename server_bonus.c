/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 17:23:52 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/09 00:49:10 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"
#include <signal.h>
#include <unistd.h>

void	ft_signalcatcher(int signal)
{
	static unsigned char	total;
	static int				max = 128;

	if (signal == SIGUSR2)
		total += max;
	max /= 2;
	if (max == 0)
	{
		write (1, &total, 1);
		max = 128;
		total = 0;
	}
}

void	ft_printnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_printnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(void)
{
	write(1, "Server PID: ", 13);
	ft_printnbr(getpid());
	write(1, "\n", 1);
	signal(SIGUSR1, ft_signalcatcher);
	signal(SIGUSR2, ft_signalcatcher);
	while (1)
		pause();
	return (0);
}
