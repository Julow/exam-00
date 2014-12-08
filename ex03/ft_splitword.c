/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/04 10:04:00 by exam              #+#    #+#             */
/*   Updated: 2014/12/04 11:50:28 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ord_alphlong.h"

int			ft_isspace(char c)
{
	return ((c == ' ' || c == '\t') ? 1 : 0);
}

int			skip_spaces(char *str)
{
	int			i;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	return (i);
}

int			skip_word(char *str, char **word)
{
	int			i;
	int			len;
	char		*tmp;

	i = 0;
	while (str[i] != '\0' && !ft_isspace(str[i]))
		i++;
	len = i;
	tmp = (char*)malloc(sizeof(char) * (i + 1));
	tmp[i] = '\0';
	while (--i >= 0)
		tmp[i] = str[i];
	(*word) = tmp;
	return (len);
}

int			count_words(char *str)
{
	int			words;
	int			i;

	words = 0;
	i = skip_spaces(str);
	while (str[i] != '\0')
	{
		if (ft_isspace(str[i]))
		{
			words++;
			i += skip_spaces(str + i);
		}
		i++;
	}
	if (i > 0)
		words++;
	return (words);
}

char		**ft_splitword(char *str)
{
	char		**words;
	int			i;
	int			len;

	words = (char**)malloc(sizeof(char*) * (count_words(str) + 1));
	i = skip_spaces(str);
	len = 0;
	while (str[i] != '\0')
	{
		i += skip_word(str + i, words + len);
		len++;
		i += skip_spaces(str + i);
	}
	words[len] = NULL;
	return (words);
}
