/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 14:31:55 by yzungula          #+#    #+#             */
/*   Updated: 2018/07/24 14:52:47 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\n')
		return (1);
	return (0);
}

int		main(int ac, char **argv)
{
	int		len;
	int		i;

	len = 0;
	i = 1;
	if (ac < 2)
		write(1, "\n", 1);
	else
	{
		while(i < ac)
		{
			len = ft_strlen(argv[i]) - 1;
			if (len <= 0)
				return (0);
			while (argv[i][len])
			{
				if (!ft_isspace(argv[i][len]) && (ft_isspace(argv[i][len]) ||
								argv[i][len + 1] == '\0'))
					write(1, &to_upper(argv[i][len], 1);
				else
					write(1, &argv[i][len], 1);
				len--;
			}
		}	
	}
}
