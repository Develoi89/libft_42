/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:27:35 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/12 19:33:25 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*r;

	i = ft_strlen((char *)s);
	while (s[i] != c && i != 0)
		i--;
	r = (char *)s + i;
	if (i == 0 && i != c)
		return (0);
	else
		return (r);
}
