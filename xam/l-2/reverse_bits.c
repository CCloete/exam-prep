/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccloete <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 14:51:30 by ccloete           #+#    #+#             */
/*   Updated: 2020/01/28 13:45:12 by ccloete          ###   ########.fr       */
/*                                                                             */
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

unsigned char reverse_bits(unsigned char octet)
{
	int i;
	unsigned char barcode;

	i = 7;
	while(i >= 0)
	{
		barcode = (octet & 1) | (barcode << 1);
		octet >>= 1;
		i = i - 1;
	}
	return (barcode);
}

int main()
{
	print_bits(57);
	write(1, "\n", 1);
	print_bits(reverse_bits(57));
	return (0);
}   
