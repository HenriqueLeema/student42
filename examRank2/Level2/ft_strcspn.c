/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:45:58 by hde-souz          #+#    #+#             */
/*   Updated: 2023/12/05 21:07:38 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../examlib.h"

size_t	ft_strcspn(const char *s, const char *reject)
{
        // calculates 's' length that are not present in reject
        auto size_t i = 0;
        auto size_t j = 0;
        
        while (s[i] != '\0') 
        {
                j = 0;
                while (reject[j] != '\0')
                {
                        if (s[i] == reject[j])
                                return (i);
                        j++;
                }
                i++;
        }
        return (i);
}

int     main(int argc, char **argv)
{
        if (argc == 3)
        {
                printf("%zu\n", ft_strcspn(argv[1], argv[2]));
                printf("%zu\n", strcspn(argv[1], argv[2]));
        }
        return (0);
}