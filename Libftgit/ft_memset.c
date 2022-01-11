/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:33:32 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/10 16:46:47 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_memset(void *ptr, int x, size_t n)
{
	while (n)
	{
		n--;
		*((unsigned char *)(ptr + n)) = (unsigned char) x;
	}
	return (ptr);
}
