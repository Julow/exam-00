/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/04 09:46:26 by exam              #+#    #+#             */
/*   Updated: 2014/12/04 09:57:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_strchr(char *str, char c)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int			main(int argc, char **argv)
{
	int			i;

	if (argc == 3)
	{
		i = -1;
		while (argv[1][++i] != '\0')
		{
			if (ft_strchr(argv[1], argv[1][i]) == i)
				write(1, argv[1] + i, 1);
		}
		i = -1;
		while (argv[2][++i] != '\0')
		{
			if (ft_strchr(argv[2], argv[2][i]) == i
				&& ft_strchr(argv[1], argv[2][i]) == -1)
				write(1, argv[2] + i, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
