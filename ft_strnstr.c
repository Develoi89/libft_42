/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:59:08 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/17 19:59:44 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t		i;
// 	char	*r;
// 	int		j;
// 	size_t	l;

// 	i = 0;
// 	if (ft_strlen((char *)needle) == 0)
// 		return ((char *)haystack);
// 	else
// 	{	
// 		while (haystack[i] != '\0' && i < len - ft_strlen((char *)needle))
// 		{
// 			printf("debug:%d", ft_strlen((char *)needle));
// 			if (haystack[i] == needle[0])
// 			{
// 				j = ft_strncmp((char *)haystack + i, (char *)needle, 2);
// 				if (j == 0)
// 					return ((char *)haystack + i);
// 				else
// 					ft_strnstr(haystack + i + 1, needle, len - (i + 1));
// 			}
// 			i++;
// 		}
// 	}
// 	return (0);
// }

int	main(void)
{
	const char	dst[15] = "holacaracolass";
	const char	src[6] = "laca";

	printf("original:%s\n", strnstr(dst, src, 3));
	printf("mine:%s", ft_strnstr(dst, src, 3));
	return (0);
}