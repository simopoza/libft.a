/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannahri <mannahri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:02:44 by mannahri          #+#    #+#             */
/*   Updated: 2021/11/07 15:51:55 by mannahri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    
    i = 0;
    while (s1[i] == s2[i] && i < n)
    {
        if (s1[i]!= s2[i])
            return(((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
        i++;
    }
    return(0);
}*/
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    
    i = 0;
    if(n == 0)
        return(0);
    while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
        i++;
    return((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main()
{
    char* K = "paha";
    char* H = "pŠna";
    printf("mine : %d\n", ft_strncmp(K, H, 2));
    printf("theirs : %d", strncmp(K, H, 2));
    return(0);
}*/