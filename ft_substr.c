/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannahri <mannahri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:09:27 by mannahri          #+#    #+#             */
/*   Updated: 2021/11/11 21:27:33 by mannahri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	i = 0;
	while (i < len && s[i])
		i++;
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	j = 0;
	while (j < i)
	{
		str[j++] = s[start++];
	}
	str[j] = '\0';
	return (str);
}

/*int main()
{
	char k[] = "This is my time ok";
	printf("%s", ft_substr(k, 5, 2));
	return(0);
}*/