/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:09:59 by hde-souz          #+#    #+#             */
/*   Updated: 2023/11/30 23:34:41 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../examlib.h"

/*Function description*/ int first_word();

int main(int argc, char **argv)
{
    auto int i = 0;

    if (argc == 2)
    {
        while (argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\n')
            i++;
        while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\n')
        { 
            write(1, &argv[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
    return (0);
}