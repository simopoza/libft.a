/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannahri <mannahri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:43:50 by mannahri          #+#    #+#             */
/*   Updated: 2021/11/07 15:26:22 by mannahri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
    char *x;
    int l;

	x = (char*)s;
	if (c == 0)
        return (x + ft_strlen(x));
    l = ft_strlen(x);
    while (l >= 0)
    {
        if (x[l] == c)
            return(&x[l]);
        l--;
    }
    return (0);
}
/*int main()
{
	const char* str2 = "hamama";
    //char c = 0;
    //printf("%s\n",ft_strrchr(l, c));
    printf("%s", ft_strrchr(str2 + 2, 0));
    printf("%s",strrchr(str2 + 2,  0));
    return(0);
}*/
/*int				main(int argc, const char *argv[])
{
	char		str2[] = "bonjour";
	int			arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		strrchr(str2, 'b', 0);
	else if (arg == 2)
		strrchr(str2, 'o', 4);
	else if (arg == 3)
	{
		char	str3[]= "bonjourno";

		strrchr(str3, 'o', 8);
	}
	else if (arg == 4)
		strrchr(str2, 'j', 3);
	else if (arg == 5)
		strrchr(str2, 's', 0);
	else if (arg == 6)
		strrchr(str2, '\0', 7);
	else if (arg == 7)
	{
		char	str3[] = "";

		strrchr(str3, '\0', 0);
	}
	else if (arg == 8)
		strrchr(str2 + 2, 'b', 0);
	return (0);
}*/
