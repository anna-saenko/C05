/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaenko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:58:49 by asaenko           #+#    #+#             */
/*   Updated: 2023/12/05 14:58:51 by asaenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;

	while (i * i <= nb && i <= 46340)
		{
			if (i * i == nb)
			{
				return (i);
			}
			i++;
		}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i;
	int	result;

	i = 0;
	while (i <= 100)
	{
		result = ft_sqrt(i);
		printf("Square root of %d: %d\n", i, result);
		i++;
	}
} */