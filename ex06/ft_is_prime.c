/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaenko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:59:18 by asaenko           #+#    #+#             */
/*   Updated: 2023/12/05 14:59:20 by asaenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb > 1)
	{
		i = 2;
		while (i <= nb / i)
		{
			if (nb % i == 0)
			{
				return (0);
			}
			i++;
		}
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	i;
	int result;

	i = -2;
	while (i < 100)
	{
		result = ft_is_prime(i);
		if (result == 0)
		{
			printf("%d isn't \n", i);
		}
		else
		{
			printf("%d is prime\n", i);
		}
		i++;
	}
} */