/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannahri <mannahri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:15:43 by mannahri          #+#    #+#             */
/*   Updated: 2021/11/08 12:20:08 by mannahri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char	*s)
{
	char	*l;
	size_t	i;

	l = (char *)s;
	i = 0;
	while (l[i])
		i++;
	return (i);
}
/*int main()
{
    char* l = "lkjh";
    printf("%zu",ft_strlen(l));
    return(0);
}*/
