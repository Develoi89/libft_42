/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:53:10 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/12 19:33:37 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*r;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	r = (char *)s + i;
	if (s[i] != c)
		return (0);
	else
		return (r);
}
