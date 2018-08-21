/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 10:01:36 by yzungula          #+#    #+#             */
/*   Updated: 2018/07/10 10:01:48 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int    isprime(int nbr)
{
    int i;

    i = 2;
    while (i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
    return (1);
}
int    ft_atoi(char *str)
{
    long    res;
    int     sign;

    res = 0;
    while (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == '\v' || *str == '\f' || *str == '\r')
		str++;
    sign = (*str == '-') ? -1 : 1;
    (*str == '-' || *str == '+') ? str++ : str;
    while (*str && res >= 0 && (*str >= '0' && *str <= '9'))
    {
        res = res * 10 + (*str++ - '0');
    }
    if (res < 0 && sign == 1)
        return (-1);
    if (res < 0 && sign == -1)
        return (0);
    return (sign * (int)res);
}

void	ft_putnbr(int n)
{
	long	n_long;
    char    c;

	n_long = (long)n;
	if (n_long < 0)
	{
	    write(1, "-", 1);
		n_long = n_long * -1;
	}
	if (n_long > 9)
	{
		ft_putnbr(n_long / 10);
		ft_putnbr(n_long % 10);
	}
	else
    {
        c = n_long + '0';
        write(1, &c, 1);
    }
}


int     main(int argc, char **argv)
{
    int num;
    int sum;

    if (argc != 2 || ft_atoi( argv[1]) < 0)
    {
        write(1, "0\n", 2);
        exit(0);
    }
    else
    {
        sum = 0;
        num = ft_atoi(argv[1]);
        ft_putnbr(num);
        while (num >= 2)
        {
            isprime(num) ? (sum += num) : num--;
        }
        ft_putnbr(sum);
        write(1, "\n", 1);
    }
    return 0;
}
