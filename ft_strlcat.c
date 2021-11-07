/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannahri <mannahri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:16:31 by mannahri          #+#    #+#             */
/*   Updated: 2021/11/07 15:56:45 by mannahri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcat(char * dst, const char * src, size_t dstsize)
{
    size_t l_src;
    size_t l_dst;
    size_t i;

    l_src = ft_strlen(src);
    l_dst = ft_strlen(dst);
    i = 0;
    if (dstsize == 0)
        return(l_src);
    while (dst && l_dst + 1 < dstsize - 1)
    {
        dst[l_dst + 1] = src[l_dst + 1];
        i++;
    }
    dst[l_dst + 1] = '\0';
    if (l_dst < dstsize)
        return(l_dst + l_src);
    else
        return(l_src + dstsize);
}
/*
int main()
{
    char* l = "issam";
    char* k = "el-machkour";
    printf("%lu", ft_strlcat(l, k, 5));
    printf("%lu", strlcat(l, k, 5));
    return(0);
}
*/