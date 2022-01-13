/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:58:16 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/13 18:09:52 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *str, char *str2, int n)
{
	int	i;
	int	r;

	i = 0;
	while (i != n)
	{
		if (str[i] == str2[i])
			i++;
		else
			return (str[i] - str2[i]);
	}
	return (0);
}
