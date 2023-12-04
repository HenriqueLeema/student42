/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:45:48 by hde-souz          #+#    #+#             */
/*   Updated: 2023/12/04 19:49:43 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../examlib.h"

void    do_op(int frst, char scnd, int thrd)
{           
        if (scnd == '+')
                printf ("%d", (frst + thrd));
        else if (scnd == '-')
                printf ("%d", (frst - thrd));
        else if (scnd == '*')
                printf ("%d", (frst * thrd));
        else if (scnd == '/')
                printf ("%d", (frst / thrd));
        else if (scnd == '%')
                printf ("%d", (frst % thrd));
}

int    main(int argc, char **argv)
{
        if (argc == 4)
                do_op(atoi(argv[1]), argv[2][0], atoi(argv[3]));
        printf("\n");
        return (0);
}