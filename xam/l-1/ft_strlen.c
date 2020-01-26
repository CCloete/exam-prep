/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccloete <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 13:09:37 by ccloete           #+#    #+#             */
/*   Updated: 2020/01/26 13:25:33 by ccloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i = i + 1;
	}
	return(i);
}

int main()
{
	char s[] = "I love CODING";
	int v = 0;

	v = ft_strlen(s);
	printf("%d", v);
	return (0);
}
