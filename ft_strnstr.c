/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:59:08 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/18 14:49:42 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)


int	main(void)
{
	const char	dst[15] = "holacaracolass";
	const char	src[6] = "laca";

	printf("original:%s\n", strnstr(dst, src, 3));
	printf("mine:%s", ft_strnstr(dst, src, 3));
	return (0);
}