/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccloete <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 14:18:26 by ccloete           #+#    #+#             */
/*   Updated: 2020/01/28 11:12:18 by ccloete          ###   ########.fr       */
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

int main()
{
	unsigned char d;
	
	d = 2;
	print_bits(d);
	return(0);
}
