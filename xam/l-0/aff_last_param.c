/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccloete <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 08:45:44 by ccloete           #+#    #+#             */
/*   Updated: 2020/01/26 08:53:04 by ccloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		while(argv[argc - 1][i] != '\0')
		{
			write(1, &argv[argc - 1][i], 1);
			i = i + 1;
		}
		write(1, "\n", 1);
		return (0);
	}
}

