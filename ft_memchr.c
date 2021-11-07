/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannahri <mannahri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:57:41 by mannahri          #+#    #+#             */
/*   Updated: 2021/11/04 10:37:20 by mannahri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void* ft_memchr(const void *s, int c, size_t n)
{
    char* h;
    h = (char*)s;
    size_t i;

    i = 0;
    while (i < n)
    {
        if (h[i] == c)
            return(h + i);
        i++;
    }
    return(0);
}
/*int main()
{
    char* k = "humama";
    char l = 'm';
    printf("%s\n",ft_memchr(k, l,3));
    printf("%s",memchr(k, l, 3));
    return(0);
}*/