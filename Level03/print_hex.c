/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 16:16:28 by yzungula          #+#    #+#             */
/*   Updated: 2018/07/10 16:16:30 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_atoi(char *str)
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

void    print_hex(int num)
{
    char *str;

    str = "0123456789abcdef";
    if (num == 0)
        write(1, "0", 1);
    while(num)
    {
        write(1, &str[num % 16], 1);
        num /= 16;
    }
}


int main(int argc, char *argv[])
{
    if (argc != 2)
        write(1, "\n", 1);
    else
    {

        print_hex(ft_atoi(argv[1]));
        write(1, "\n", 1);
    }
    return 0;
}
