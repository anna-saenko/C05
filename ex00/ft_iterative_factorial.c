/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaenko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:55:57 by asaenko           #+#    #+#             */
/*   Updated: 2023/12/05 14:56:01 by asaenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb && nb >= 0)
	{
		if (nb > 1)
		{
			result = nb;
			while (--nb != 0)
			{
				result *= nb;
			}
			return (result);
		}
		else
		{
			return (1);
		}
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
	int	factorial;

	factorial = ft_iterative_factorial(5);
	printf("Factorial is: %d\n", factorial);
} */