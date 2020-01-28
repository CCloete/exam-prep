/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccloete <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 13:18:35 by ccloete           #+#    #+#             */
/*   Updated: 2020/01/28 13:49:39 by ccloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i;
	unsigned char d;

	i = 7;
	while(i >= 0)
	{
		d = ((octet >> i) & 1) + '0';
		write(1, &d, 1);
		i = i - 1;
	}
}

unsigned char	swap_bits(unsigned char octet)
{
	return(octet >> 4 | octet << 4);
}

int main(void)
{
	print_bits(76);
	write(1, "\n", 1);
	print_bits(swap_bits(76));
	return (0);
}
