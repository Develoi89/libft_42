/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:35:08 by ealonso-          #+#    #+#             */
/*   Updated: 2021/12/21 15:40:37 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (src[a] != '\0')
	{
		a++;
	}
	if (size != 0)
	{
		while (src[b] != '\0' && b < size - 1)
		{
			dest[b] = src[b];
			b++;
		}
			dest[b] = '\0';
	}
	return (a);
}
