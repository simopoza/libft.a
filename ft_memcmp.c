/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannahri <mannahri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:34:01 by mannahri          #+#    #+#             */
/*   Updated: 2021/11/06 21:40:11 by mannahri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char* src;
    char* dest;
    size_t i;
    
    src = (char*)s1;
    dest = (char*)s2;
    i = 0;
    if(n == 0)
        return(0);
    while (src[i] == dest[i] && i < n - 1)
        i++;
    return((unsigned char)src[i] - (unsigned char)dest[i]);
}