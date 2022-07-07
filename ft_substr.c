/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: develoi89 <develoi89@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:20:16 by ealonso-          #+#    #+#             */
/*   Updated: 2022/07/07 17:31:09 by develoi89        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	j = ft_strlen(s) - (start);
	if (j > len)
		i = len;
	else
		i = j;
	new = malloc(i + 1 * sizeof(char));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s + start, i + 1);
	return (new);
}
