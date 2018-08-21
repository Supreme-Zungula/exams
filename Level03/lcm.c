/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:58:21 by yzungula          #+#    #+#             */
/*   Updated: 2018/07/10 15:58:24 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int hcm;
    unsigned int i;

    hcm = 0;
    i = 1;
    while (i <= a / 2 && i <= b / 2)
    {
        if (a % i == 0 && b % i == 0)
            hcm = i;
        i++;
    }
    return ((a * b) / hcm);
}
int main(int ac, char **argv)
{
    if (ac != 3)
        puts("Needs two main args");
    else
    {
        printf("lcm = %u\n", lcm(atoi(argv[1]), atoi(argv[2])));
    }
}
