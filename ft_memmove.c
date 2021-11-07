/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannahri <mannahri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:35:16 by mannahri          #+#    #+#             */
/*   Updated: 2021/11/06 21:37:58 by mannahri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void* ft_memmove(void *dst, const void *src, size_t len)
{
    char* dest;
    const char* srrc;
    size_t i;

    dest = (char*)dst;
    srrc = (const char*)src;
    i = 0;
    if (len == 0)
        return(dest);
    if (dest > srrc)
    {
        while (srrc && i < len)
        {
            dest[len] = srrc[len];
            len--;
        }        
    }
    else
    {
        if (dest == NULL && srrc == NULL)
            return (NULL);
        /*if (dest == srrc)
            return (dest);*/
        while (srrc && i < len)
        {
            dest[i] = srrc[i];
            i++;
        }
    }
    return(dest);
}
/*
int main()
{
    char s1[] = "Learningisfun";
    char s2[] = "Learningisfun";

    ft_memmove(s1 + 5, s1, 8);
    printf("mine %s \n",s1);
    memmove(s2 + 5, s2, 8);
    printf("theirs %s \n",s2);
}

int main()
{
    char src[] = "future is loading";
    char dst[] = "aaaaaaaaaaaaaaaa";
    printf("%s\n", ft_memmove(dst, src, 5));
    printf("%s\n", memmove(dst, src, 5));
    return(0);
}
int main()
{
    char d[] = "yassine";
    char s[] = "dahni";
    memmove(s,s+2,5);
    printf("%s",s);
}*/