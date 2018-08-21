/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:31:03 by yzungula          #+#    #+#             */
/*   Updated: 2018/07/10 15:31:06 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     search_str(char *s1, char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s2[i] && s1[j])
    {
         if (s2[i] == s1[j])
            j++;
        i++;
    }
    if (s1[j] == '\0')
        return (1);
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
        write(1, "\n", 1);
    else
    {
        if (search_str(argv[1], argv[2]))
            write(1, "1\n", 2);
        else
            write(1, "0\n", 2);
    }
    return (0);
}
