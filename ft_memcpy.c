/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannahri <mannahri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:05:44 by mannahri          #+#    #+#             */
/*   Updated: 2021/11/06 21:43:44 by mannahri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void* ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char* dest;
    unsigned char* srrc;
    size_t i;

    dest = (unsigned char*) dst;
    srrc = (unsigned char*) src;
    i = 0;
    if (dest == srrc)
        return (dest);
    if (dest == NULL && srrc == NULL)
        return (NULL);
    while (i < n)
    {
        dest[i] = srrc[i];
        i++;
    }
    return(dest);
}
/*
int main()
{
    char src[] = "boys";
    char dst[] = "boys";
    printf("%s\n", ft_memcpy(dst, src, 4));
    printf("%s\n", memcpy(dst, src, 4));
    return(0);
}*/