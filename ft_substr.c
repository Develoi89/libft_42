/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:20:16 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/25 17:36:13 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	char	*false;

	if (!s)
		return (NULL);
	false = ft_strdup("");
	if (start >= ft_strlen(s) + 1)
		return (false);
	new = malloc(len + 1 * sizeof(char));
	if (!new)
		return (NULL);
	ft_bzero(new, len +1);
	ft_strlcpy(new, s + start, len + 1);
	return (new);
}
