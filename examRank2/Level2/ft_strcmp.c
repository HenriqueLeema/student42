/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:45:55 by hde-souz          #+#    #+#             */
/*   Updated: 2023/12/05 20:38:07 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../examlib.h"

int ft_strcmp(char *s1, char *s2)
{
        auto int i = 0;
        while (s1[i] && s2[i] && s1[i] == s2[i])
                i++;
        return (s1[i] - s2[i]);
}

int     main(int argc, char **argv)
{
        if (argc == 3)
                printf("%i\n", ft_strcmp(argv[1], argv[2]));
        return (0);
}