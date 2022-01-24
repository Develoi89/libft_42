/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:05:04 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/24 17:13:15 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ftt_isspace(const char *str, int i)
{
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127)
			i++;
		else
			break ;
	}
	return (i);
}

int	ftt_isnegative(const char *str, int i)
{
	if (str[i] == 45)
		return (-1);
	else
		return (1);
}

int	ftt_convert(const char *str, int i)
{
	int	x;

	x = 0;

	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
	{
		x = x * 10 + (str[i] - '0');
		i++;
	}
	return (x);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	c;

	i = 0;
	c = 0;
	i = ftt_isspace(str, i);
	n = ftt_isnegative(str, i);
	if (n < 0)
		i++;
	c = ftt_convert(str, i);
	c = c * n;
	return (c);
}

// int	main(void)
// {
// 	int		q;
// 	int		p;
// 	char	str[] = "2147483649";

// 	q = ft_atoi(str);
// 	p = atoi(str);
// 	printf("result:%i\n", q);
// 	printf("Real_result:%i", p);
// 	return (0);
// }

