/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccloete <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 12:15:45 by ccloete           #+#    #+#             */
/*   Updated: 2020/01/26 13:08:15 by ccloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int rep;

	i = 0;
	if(argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				rep = argv[1][i] - 96;
				while(rep != 0)
				{
					write(1, &argv[1][i], 1);
					rep = rep - 1;
				}
			}
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				rep = argv[1][i] - 64;
				while(rep != 0)
				{
					write(1, &argv[1][i], 1);
					rep = rep - 1;
				}
			}
			write(1, &argv[1][i], 1);
			i = i + 1;
		}
		write(1, "\n", 1);
		return (0);
	}
}
