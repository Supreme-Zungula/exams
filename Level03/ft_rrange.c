/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 12:45:38 by yzungula          #+#    #+#             */
/*   Updated: 2018/07/10 12:45:41 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int     *ft_range(int start, int end)
{
    int     size;
    int     *range;
    int     i;

    size = (start < end) ? end - start : start - end;
    if (!(range = (int *)malloc(sizeof(int) * size)))
        return (NULL);
    i = 0;
    while (start != end)
    {
        range[i++] = end;
        end += (start < end) ? -1 : 1;
    }
    range[i] = end;
    return (range);
}


int main(int argc, char const *argv[])
{
    int start;
    int end;
    int i = 0;
    int *range;
    int size;
    if (argc != 3)
    {
        puts("Must have 2 main args");
        return (0);
    }
    start = atoi(argv[1]);
    end = atoi(argv[2]);
    size = (start < end) ? end - start : start - end;
    range = ft_range(start, end);
    while (i <= size)
        printf("%d ", range[i++]);
    return 0;
}