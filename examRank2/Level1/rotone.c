/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:45:21 by hde-souz          #+#    #+#             */
/*   Updated: 2023/12/01 20:26:17 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../examlib.h"

void	rot_one(char *s)
{
	auto int i = 0;
	while (s[i])
	{
		if ((s[i] >= 'A' && s[i] < 'Z') || (s[i] >= 'a' && s[i] < 'z'))
			s[i] += 1;
		else if (s[i] == 'Z' || s[i] == 'z')
			s[i] -= 25;
		write(1, &s[i++], 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rot_one(argv[1]);
	write(1, "\n", 1);
	return (0);
}