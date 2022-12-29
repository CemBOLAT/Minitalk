/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:38:26 by cbolat            #+#    #+#             */
/*   Updated: 2022/12/29 11:38:53 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include <stdio.h>
# include <unistd.h>
# include <signal.h>

# ifndef DELAY_TIME
#  define DELAY_TIME 100
# endif

void	ft_printnbr(int n);
void	ft_signalcatcher(int signal);
int		ft_atoi(const char *str);

#endif
