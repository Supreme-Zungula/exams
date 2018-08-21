/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 11:59:15 by yzungula          #+#    #+#             */
/*   Updated: 2018/07/10 11:59:20 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_strlen(char *str)
{
    int len;

    len = 0;
    while (*str++)
        len++;
    return (len);
}

int     ft_isspace(char c)
{
    if (c == ' ' || c == '\t' || c == '\v' ||
        c == '\n' || c == '\f'|| c == '\r')
        return (1);
    return (0);
}

int     main(int argc, char *argv[])
{
    int     start;
    int     end;

    if (argc != 2 || ft_strlen(argv[1]) == 0)
        write(1, "\n", 1);
    else
    {
        start = 0;
        end = ft_strlen(argv[1]) - 1;
        while (ft_isspace(argv[1][start]) && argv[1][start])
            start++;
        while (ft_isspace(argv[1][end]) && end != start)
            end--;
        while (start <= end)
        {
            while (!ft_isspace(argv[1][start]) && argv[1][start])
                write(1, &argv[1][start++], 1);
            if (start < end)
                write(1, "   ", 3);
            while (ft_isspace(argv[1][start]) && argv[1][start])
                start += 1;
        }
    }
    return 0;
}

