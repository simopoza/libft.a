/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannahri <mannahri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 22:52:17 by mannahri          #+#    #+#             */
/*   Updated: 2022/03/23 03:24:44 by mannahri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main()
// {
// 	t_list	*head;

// 	head = NULL;
// 	ft_lstadd_front(&head, ft_lstnew(8));
// 	ft_lstadd_front(&head, ft_lstnew(5));
// 	ft_lstadd_front(&head, ft_lstnew(80));
// 	printf("this is how many node we have in our list : %d\n", ft_lstsize(head));
// }
