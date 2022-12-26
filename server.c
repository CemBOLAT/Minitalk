/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 17:23:52 by cbolat            #+#    #+#             */
/*   Updated: 2022/12/26 17:47:01 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void	signalcatcher(int signal)
{
	static unsigned char	total;
	static int				mi = 128;

	if (signal == SIGUSR2)
		total += mi;
	mi /= 2;
	if (mi == 0)
	{
		write (1, &total, 1);
		mi = 128;
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
	signal(SIGUSR1, signalcatcher);
	signal(SIGUSR2, signalcatcher);
	while (1)
		pause();
	return (0);
}
