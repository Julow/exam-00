/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ord_alphlong.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/04 10:01:47 by exam              #+#    #+#             */
/*   Updated: 2014/12/04 11:51:23 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ord_alphlong.h"
#include <unistd.h>

int			main(int argc, char **argv)
{
	char		**words;

	if (argc == 2)
	{
		words = ft_splitword(argv[1]);
		ft_sortalph(words);
		ft_sortlen(words);
		print_words(words);
		free(words);
	}
	write(1, "\n", 1);
	return (0);
}
