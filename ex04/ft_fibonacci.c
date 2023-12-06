/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaenko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:58:20 by asaenko           #+#    #+#             */
/*   Updated: 2023/12/05 14:58:22 by asaenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index >= 0)
	{
		if (index <= 1)
		{
			return (index);
		}
		else
		{
			return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
		}
	}
	else
	{
		return (-1);
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	result;

	result = ft_fibonacci(6);
	printf("Result: %d\n", result);
} */