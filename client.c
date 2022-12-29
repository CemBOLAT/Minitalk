/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 17:24:06 by cbolat            #+#    #+#             */
/*   Updated: 2022/12/29 11:59:17 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(const char *str)
{
	int	total;
	int	i;
	int	n;

	i = 0;
	n = 1;
	total = 0;
	while (str[i] <= 32)
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
		if (str[i++] == '-')
			n = -1;
	while (str[i] <= '9' && str[i] >= '0')
		total = (total * 10) + (str[i++] - 48);
	if (str[i] != '\0')
		return (write(1, "Pid ERROR!\n", 11));
	return (total * n);
}

int	ft_unicode_check(char *str)
{
	int	n;
	int	i;

	i = 0;
	while (str[i])
	{
		n = str[i];
		if (!(n >= 0 && n <= 127))
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	size;
	int	pid;

	if (argc != 3)
		return (write(2, "Argument error!!", 16));
	if (ft_unicode_check(argv[2]))
		return (write(2, "You cannot send UNICODE character\n", 35));
	pid = ft_atoi(argv[1]);
	i = 0;
	while ((argv[2][i]))
	{
		size = 8;
		while (size--)
		{
			if (((argv[2][i] >> size) & 1) == 0)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(DELAY_TIME);
		}
		i++;
	}
	return (0);
}
