/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 18:14:19 by exam              #+#    #+#             */
/*   Updated: 2015/10/30 18:25:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{
	int i;
	char j;
	char x;
	char m;

	i = 1;
	j = 'a';
	x = '\n';
	while (i <= 26 && j <= 'z')
	{
		if (i % 2 != 0)
			write(1, &j, 1);
		else
		{
			m = j - 32;
			write(1, &m, 1);
		}
		i++;
		j++;
	}
	write(1, &x, 1);
	return (0);
}
