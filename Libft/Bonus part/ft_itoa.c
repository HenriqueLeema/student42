/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:32:32 by hde-souz          #+#    #+#             */
/*   Updated: 2023/10/27 18:33:35 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		counter++;
	}
	while (n != 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

static void	convert(char *str, int n, int digits)
{
	int	i;

	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return ;
	}
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	i = digits - 1;
	while (n != 0)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	str[digits] = '\0';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digits;

	if (n == -2147483648)
	{
		str = malloc(12);
		if (str == NULL)
			return (NULL);
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	digits = count(n);
	str = malloc (sizeof (char) * (digits + 1));
	if (str == NULL)
		return (NULL);
	convert(str, n, digits);
	return (str);
}
/*
int main(void)
{
    int numbers[] = {0, 123, -456, 7890, -2147483648, 2147483647};
    int num_count = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < num_count; i++)
    {
        int num = numbers[i];
        char *result = ft_itoa(num);

        if (result)
		{
            printf("Number: %d, Result: %s\n", num, result);
            free(result);
        }
        else
            printf("Memory allocation failed for number: %d\n", num);
    }
    return 0;
}
*/
