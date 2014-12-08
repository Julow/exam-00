/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ord_alphlong.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/04 10:09:41 by exam              #+#    #+#             */
/*   Updated: 2014/12/04 12:11:31 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ORD_ALPHLONG_H
# define ORD_ALPHLONG_H

# include <stdlib.h>

int			ft_isspace(char c);
int			skip_spaces(char *str);
int			skip_word(char *str, char **word);
int			count_words(char *str);
char		**ft_splitword(char *str);

int			ft_strlen(char *str);
void		print_words(char **words);

void		ft_strsswap(char **strs, int i1, int i2);
char		ft_upper(char c);
int			ft_stralphcmp(char *s1, char *s2);
void		ft_sortalph(char **strs);
void		ft_sortlen(char **strs);

#endif
