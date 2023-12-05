/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:46:11 by hde-souz          #+#    #+#             */
/*   Updated: 2023/12/05 22:04:00 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../examlib.h"

char	*ft_strpbrk(const char *s1, const char *s2)
{       
        auto int i = 0;
        auto int j = 0;

        while (s1[i])
        {
                j = 0;
                while (s2[j])
                {
                        if (s1[i] == s2[j])
                                return (*s2);
                        i++;
                }
                j++;
        }
        return (*s2);
}

int     main(int argc, char **argv)
{
        if (argc == 3)
        {
                printf("%c\n", ft_strpbrk(argv[1]));
                printf("%c\n", strpbrk(argv[1]));
        }
        return (0);
}