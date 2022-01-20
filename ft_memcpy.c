/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:28:21 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/20 19:01:53 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *ptr, void *ptr2, size_t n)
{
	if (!ptr && !ptr2)
		return (0);
	while (n)
	{
		n--;
		*((unsigned char *)(ptr + n)) = *((unsigned char *)(ptr2 + n));
	}
	return (ptr);
}
