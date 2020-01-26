/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccloete <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 08:53:21 by ccloete           #+#    #+#             */
/*   Updated: 2020/01/26 09:00:03 by ccloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc < 2)
	{
		write(1, "z\n", 2);
		return (0);
	}
	else
	{
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] == 'z')
			{
				write(1, "z\n", 2);
			}
			else
				i = i + 1;
		}
		write(1, "z\n", 2);
		return (0);
	}
}