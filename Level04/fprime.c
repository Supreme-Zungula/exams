/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 16:25:30 by yzungula          #+#    #+#             */
/*   Updated: 2018/07/17 17:07:15 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void		fprime(int num)
{
	int		i;

	i = 2;
	if (num == 1)
		printf("1");
	if (num < 1)
		return;
	while (i <= num)
	{
		if (num % i == 0)
		{
			printf("%d", i);
			if (i == num)
				return;
			printf("*");
			num = num / i;
			i = 2;
		}
		i++;
	}
	printf("\n");
}

int		main(int ac, char **argv)
{
	int		n;

	n = 0;
	if (ac != 2)
		printf("\n");
	else
	{
		n = atoi(argv[1]);
		fprime(n);
	}
}
