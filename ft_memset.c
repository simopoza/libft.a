/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannahri <mannahri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:20:31 by mannahri          #+#    #+#             */
/*   Updated: 2021/11/06 21:38:10 by mannahri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memset(void* b, int c, size_t len)
{
    size_t i;
    unsigned char* k;

    k = (unsigned char*)b;
    i = 0;
    while (i < len)
    {
        k[i] = c;
        i++;
    }
    //b = k;
    return(k);
}
/*int main () {
   char str[] = "This is string.h library function";
   puts(str);

   ft_memset(str,'5',7);
   puts(str);
   memset(str, '5', 7);
   puts(str);
   return(0);
}
// int main()
// {
//     char str[50] = "hamza is 1337 student";
//     printf("\nBefore memset(): %s\n", str);

//     // Fill 8 characters starting from str[13] with '.'
//     memset(str + 9, '.', 4);
//     ft_memset(str + 9, '.', 4);

//     printf("After memset():  %s\n", str);
//     printf("After ft_memset():  %s", str);
//     return 0;
// }*/