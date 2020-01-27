/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccloete <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 14:18:26 by ccloete           #+#    #+#             */
/*   Updated: 2020/01/27 14:40:55 by ccloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	int bit;

	i = 8;
	bit = 128;
	while(i > 0)
	{
		if(bit <= octet)
		{
			write(1, "1", 1);
			octet = octet - bit;
		}
		else
		{
			write(1, "0", 1);
		}
		bit = bit/2;
		i = i - 1;
	}
}

int	main()
{
	int bin;

	bin = 2;
	print_bits(bin);
	return (0);
}
