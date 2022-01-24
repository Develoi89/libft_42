/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:30:23 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/24 18:46:46 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	*r;
	char str[10] = "jolahola";
	int c = 'j';

	r = ft_strrchr(str, c);
	printf("%s", r);
	return (0);
}

// int main(void)
// {
// 	char	*r;
// 	char str[10] = "jolahola";
// 	int c = 'u';

// 	r = ft_strchr(str, c);
// 	printf("%s", r);
// 	return (0);
// }

// int	ft_strncmp(char *str, char *str2, int n);

// int main(void)
// {
//     char    str[10] = "abcdefghi";
//     char    str2[10] = "abcdffghi";

//     printf("diferencia:%i", ft_strncmp(str, str2, 6));
//     return (0);
// }

// int	main(void)
// {
// 	char	s[8] = "qwerty";
// 	size_t	n;
// 	int		c;

// 	c = 'w';
// 	n = 6;
// 	printf("Original:%s\n", memchr(s, c, n));
// 	printf("Mine:%s", ft_memchr(s, c, n));
// 	return (0);
// }

// int	main(void)
// {
// 	char	s1[5] = "hola";
// 	char	s2[5] = "holu";
// 	size_t	n;

// 	n = 4;

// 	printf("original:%i\n", memcmp(s1, s2, n));
// 	printf("mine:%i", ft_memcmp(s1, s2, n));

// 	return (0);
// }


// int	main(void)
// {
// 	const char	dst[] = "AAAAAAAAAAAAA";
// 	const char	src[] = "MZIRIBMZE";

// 	printf("original:%s\n", strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
// 	printf("mine:%s", ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
// 	return (0);
// }

// int	main(void)
// {
// 	int		q;
// 	int		p;
// 	char	str[] = "9223372036854775808";

// 	q = ft_atoi(str);
// 	p = atoi(str);
// 	printf("result:%i\n", q);
// 	printf("Real_result:%i", p);
// 	return (0);
// }