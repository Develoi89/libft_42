/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:58:16 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/13 15:44:22 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *str, char *str2, int n)
{
	int	x;
	int	y;
	int	z;

	x = ft_strlen(str);
	y = ft_strlen(str2);
	z = x - y;
	return (z);
}

int main(void)
{
	
}