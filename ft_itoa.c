/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:41:30 by ealonso-          #+#    #+#             */
/*   Updated: 2022/02/01 15:08:53 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ftt_intlen(int x)
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

void	ftt_putstr(char *res, int x)
{
	if (x != 0)
		ftt_putstr(res, x / 10);
	res[ftt_intlen(x)] = '\0';
	printf("prueba%s\n", res);
}

char	*ft_itoa(int x)
{
	char	*res;

	res = malloc(ftt_intlen(x) * sizeof(char));
	if (!res)
		return (NULL);
	ftt_putstr(res, x);
	return (NULL);
}

int	main()
{
	int		x;
	char	*c;

	x = -1989;
	c = ft_itoa(x);
	printf("the char is:%s", c);
}
