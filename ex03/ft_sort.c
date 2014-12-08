/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/04 10:35:27 by exam              #+#    #+#             */
/*   Updated: 2014/12/04 11:56:21 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ord_alphlong.h"

void		ft_strsswap(char **strs, int i1, int i2)
{
	char		*tmp;

	tmp = strs[i1];
	strs[i1] = strs[i2];
	strs[i2] = tmp;
}

char		ft_upper(char c)
{
	return ((c >= 'A' && c <= 'Z') ? c + 32 : c);
}

int			ft_stralphcmp(char *s1, char *s2)
{
	char		tmp1;
	char		tmp2;
	int			i;

	i = -1;
	while (s1[++i] != '\0')
	{
		tmp1 = ft_upper(s1[i]);
		tmp2 = ft_upper(s2[i]);
		if (tmp1 != tmp2)
			return (tmp1 - tmp2);
	}
	return (0);
}

void		ft_sortalph(char **strs)
{
	int			i;
	int			j;

	i = -1;
	while (strs[++i] != NULL)
	{
		j = i;
		while (strs[++j] != NULL)
		{
			if (ft_stralphcmp(strs[i], strs[j]) < 0)
				ft_strsswap(strs, i, j);
		}
	}
}

void		ft_sortlen(char **strs)
{
	int			i;
	int			j;
	int			tmp;

	i = -1;
	while (strs[++i] != NULL)
	{
		tmp = ft_strlen(strs[i]);
		j = i;
		while (strs[++j] != NULL)
		{
			if (tmp >= ft_strlen(strs[j]))
			{
				ft_strsswap(strs, i, j);
				tmp = ft_strlen(strs[i]);
			}
		}
	}
}
