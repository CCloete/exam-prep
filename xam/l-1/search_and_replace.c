/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccloete <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 16:55:46 by ccloete           #+#    #+#             */
/*   Updated: 2020/01/26 17:22:41 by ccloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	
	i = 0;
	if((argc != 4) || (argv[2][1] != '\0') || (argv[3][1] != '\0'))
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] == argv[2][0])
			{
				argv[1][i] = argv[3][0];
				write(1, &argv[1][i], 1);
			}
			else
			{
				write(1, &argv[1][i], 1);
			}
			i = i + 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}
