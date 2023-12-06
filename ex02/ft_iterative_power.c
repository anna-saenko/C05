/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaenko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:57:20 by asaenko           #+#    #+#             */
/*   Updated: 2023/12/05 14:57:22 by asaenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		i = 1;
		result = nb;
		while (i < power)
		{
			result *= nb;
			i++;
		}
		return (result);
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int result;

	result = ft_iterative_power(-3, 3);
	printf("Result: %d\n", result);
} */