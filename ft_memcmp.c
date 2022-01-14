/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 18:50:13 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/14 19:54:31 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((const char *)s1 + i) == *((const char *)s2 + i))
			i++;
		else
			return (*((const char *)s1 + i) - *((const char *)s2 + i));
	}
	return (0);
}


int	main(void)
{
	char	s1[5] = "hola";
	char	s2[5] = "holu";
	size_t	n;

	n = 4;

	printf("original:%i\n", memcmp(s1, s2, n));
	printf("mine:%i", ft_memcmp(s1, s2, n));

	return (0);
}
