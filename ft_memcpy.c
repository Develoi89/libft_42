/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:28:21 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/13 20:27:59 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_memcpy(void *ptr, void *ptr2, size_t n)
{
	while (n)
	{
		n--;
		*((unsigned char *)(ptr + n)) = *((unsigned char *)(ptr2 + n));
	}
	return (ptr);
}
