/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannahri <mannahri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:04:49 by mannahri          #+#    #+#             */
/*   Updated: 2021/11/07 12:51:17 by mannahri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}

/*int main ()
{
   char str[] = "This is string.h library function";
    puts(str);

   ft_bzero(str, 4);
    puts(str);
    bzero(str, 4);
    puts(str);
   return(0);
}*/