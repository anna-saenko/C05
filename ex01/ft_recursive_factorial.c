/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaenko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:56:32 by asaenko           #+#    #+#             */
/*   Updated: 2023/12/05 14:56:35 by asaenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb && nb >= 0)
	{
		if (nb > 1)
		{
			return (nb * ft_recursive_factorial(nb - 1));
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

	factorial = ft_recursive_factorial(5);
	printf("Factorial is: %d\n", factorial);
} */