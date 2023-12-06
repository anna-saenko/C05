/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaenko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:00:03 by asaenko           #+#    #+#             */
/*   Updated: 2023/12/05 15:00:05 by asaenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb > 1)
	{
		i = 2;
		while (i <= nb / 2)
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

int	ft_find_next_prime(int	nb)
{
	if (ft_is_prime(nb))
	{
		return (nb);
	}
	else
	{
		return (ft_find_next_prime(nb + 1));
	}
}
/*
#include <stdio.h>
int main(void)
{
	int i;
	int result;

	i = -3;
	while (i++ < 50)
	{
		result = ft_find_next_prime(i);
		printf("The next prime of %d is %d\n", i, result);
	}
} */