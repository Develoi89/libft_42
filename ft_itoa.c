/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:41:30 by ealonso-          #+#    #+#             */
/*   Updated: 2022/02/01 16:17:54 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ftt_intlen(int x)
{
	int	count;
	int	aux;

	aux = x;
	count = 1;
	while (aux != 0)
	{
		aux = aux / 10;
		count++;
	}
	if (x < 0)
		count++;
	return (count);
}

void	ftt_putstr(char *res, int x, size_t y)
{
	if (x != 0)
	{
		res[y - 2] = (x % 10) + '0';
		ftt_putstr(res, x / 10, y - 1);
	}
}

char	*ft_itoa(int x)
{
	char	*res;

	res = malloc(ftt_intlen(x) * sizeof(char));
	if (!res)
		return (NULL);
	res[ftt_intlen(x) - 1] = '\0';
	if (x == 0)
		res[0] = 0 + '0';
	else if (x < 0)
	{
		res[0] = '-';
		ftt_putstr(res, (x * -1), ftt_intlen(x));
	}
	else
		ftt_putstr(res, x, ftt_intlen(x));
	printf("prueba%s\n", res);
	return (res);
}

int	main()
{
	int		x;
	char	*c;

	x = 0;
	c = ft_itoa(x);
	printf("the char is:%s", c);
}
