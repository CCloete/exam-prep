/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccloete <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 09:23:59 by ccloete           #+#    #+#             */
/*   Updated: 2020/01/26 10:12:45 by ccloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		while(argc > 2)
		{
			write(1, "\n", 1);
			return (0);
		}
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			i = i + 1;
		}
		while(argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			i = i + 1;
		}
		write(1, "\n", 1);
		return (0);
	}
}
