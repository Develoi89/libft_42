/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:03:18 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/12 16:10:25 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t x)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
	ft_strlcpy(dest + i, src, x);
	j = ft_strlen(dest);
	return (j);
}
