/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:56:35 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/10 17:17:04 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_bzero(void *ptr, size_t n)
{
	while (n)
	{
		n--;
		*((unsigned char *)(ptr + n)) = '\0';
	}
	return (ptr);
}
