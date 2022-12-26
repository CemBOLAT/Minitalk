#include <unistd.h>
#include <signal.h>


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
		return (write(1, "pid error!\n", 11));
	return (total * n);
}

int	main(int argc, char **argv)
{
	int	len;
	int	size;
	int	pid;

	if (argc != 3)
		return (write(2, "Argument error!!", 16));
	pid = ft_atoi(argv[1]);
	len = -1;
	while ((argv[2][++len]))
	{
		size = 8;
		while (size--)
		{
			if (((argv[2][len] >> size) & 1) == 0)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(100);
		}
	}
	return (0);
}
