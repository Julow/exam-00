/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/04 10:25:11 by exam              #+#    #+#             */
/*   Updated: 2014/12/04 11:58:55 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ord_alphlong.h"
#include <unistd.h>

int			ft_strlen(char *str)
{
	int			len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void		print_words(char **words)
{
	int			i;
	int			tmp;
	int			last_len;

	i = -1;
	last_len = -1;
	while (words[++i] != NULL)
	{
		tmp = ft_strlen(words[i]);
		if (tmp == last_len)
			write(1, " ", 1);
		else if (last_len != -1)
			write(1, "\n", 1);
		write(1, words[i], tmp);
		last_len = tmp;
		free(words[i]);
	}
}
