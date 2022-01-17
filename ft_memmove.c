/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:13:22 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/17 18:51:01 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest || !src)
		return (0);
	if (dest > src)
	{
		i = n - 1;
		while (i >= 0)
		{
			*((char *) dest + i) = *(char *) src + i;
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*((char *) dest + i) = *(char *) src + i;
			i++;
		}
	}
	return (dest);
}
