/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agamay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:59:59 by agamay            #+#    #+#             */
/*   Updated: 2024/10/15 16:48:56 by agamay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_cutnfill(const char **dest, const char *src, char c)
{
	const char	*temp;
	int			i;
	int			j;

	temp = src;
	i = 0;
	j = 0;
	while (*temp)
	{
		while (*temp != c && *temp && ++i)
			temp++;
		if (*src != c)
		{
			dest[j] = ft_substr(src, 0, i);
			i = 0;
			src = temp;
			j++;
		}
		else
		{
			temp++;
			src++;
		}
	}
	dest[j] = NULL;
}

static size_t	ft_countwords(const char *str, char c)
{
	const char	*temp;
	size_t		count;

	temp = str;
	count = 0;
	while (*temp)
	{
		if (*temp != c && (*(temp + 1) == c || (!*(temp + 1))))
			count++;
		temp++;
	}
	return (count);
}

char	**ft_split(const char *str, char c)
{
	char		**dest;
	size_t		count;

	if (!str)
		return (NULL);
	count = ft_countwords(str, c);
	dest = (char **)ft_calloc(sizeof(char *), count + 1);
	if (!dest)
		return (NULL);
	ft_cutnfill((const char **)dest, str, c);
	return (dest);
}
