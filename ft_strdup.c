/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:40:07 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/25 17:06:02 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	i;
	char	*res;

	i = ft_strlen(s1);
	res = malloc (i * sizeof(char) + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, i + 1);
	return (res);
}
