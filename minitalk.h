#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <unistd.h>
# include <signal.h>

# ifndef DELAY_TIME
#  define DELAY_TIME 100
# endif

void	ft_printnbr(int n);
void	ft_signalcatcher(int signal);
int	    ft_atoi(const char *str);
int     ft_unicode_check(char *str);

#endif