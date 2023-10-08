/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:38:23 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/09 00:49:37 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# ifndef DELAY_TIME
#  define DELAY_TIME 100
# endif

void	ft_printnbr(int n);
void	ft_signalcatcher(int signal);
int		ft_atoi(const char *str);
int		ft_unicode_check(char *str);

#endif
