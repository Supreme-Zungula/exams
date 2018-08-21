/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 15:03:35 by yzungula          #+#    #+#             */
/*   Updated: 2018/07/24 15:29:12 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int		get_len(int num)
{
	int		len;

	len = 1;
	while (num /= 10)
		len++;
	return (len);
}

char	*ft_itoa(int num)
{
	int		len;
	char	*str;
	int		sign;
	
	sign = 1;
	len = get_len(num);
	if (num < 0)
	{
		sign = -1;
		num *= sign;
	}
	printf("len1 = %d\n", len);	
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len + 1] = '\0';
	str[len] = num % 10 + '0';
	while (num % 10)
	{
		printf("len2 = %d\n", len);
		str[len--] = num % 10 + '0';
		num /= 10;
	}
	
	if (sign < 0)
	{
		printf("len = %d\n", len);
		str[len] = '-';
	}
	return (str);
}

int		main(int ac, char **argv)
{
	if (ac !=  2)
		puts("");
	else
		printf("%s", ft_itoa(atoi(argv[1])));
}
