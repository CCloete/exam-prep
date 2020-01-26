/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccloete <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 13:26:20 by ccloete           #+#    #+#             */
/*   Updated: 2020/01/26 13:37:50 by ccloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}

int main()
{
	int a = 54321;
	int b = 12345;

	ft_swap(&a, &b);
	printf("%d %d", a, b);
	return (0);
}