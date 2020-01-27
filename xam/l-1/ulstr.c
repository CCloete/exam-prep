/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccloete <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 09:45:40 by ccloete           #+#    #+#             */
/*   Updated: 2020/01/27 11:12:15 by ccloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int ul;

	i = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				ul = argv[1][i] + 32;
				write(1, &ul, 1);
			}
			else if(argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				ul = argv[1][i] - 32;
				write(1, &ul, 1);
			}
			else
			{
				write(1, &argv[1][i], 1);
			}
			i = i + 1;
		}
		write(1, "\n", 1);
		return(0);
	}
}
