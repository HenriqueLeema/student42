/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:45:51 by hde-souz          #+#    #+#             */
/*   Updated: 2023/12/04 21:50:25 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../examlib.h"

int	ft_atoi(char *str)
{
	int result = 0;
	int sign = 1;

	while (*str == 32 || (*str >= 9 && *str <= 13))
        	str++;

	if (*str == '-')
		sign = -1;
                
	if (*str == '-' || *str == '+')
		str++;

	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - 48;
		str++;
	}
	return (sign * result);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int original = atoi(argv[1]);
        int chernobyl = ft_atoi(argv[1]);
        printf("Atoi Original %i\n", original);
        printf("Atoi Chernobyl %i\n", chernobyl);
    }
}
