/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannahri <mannahri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 23:15:18 by mannahri          #+#    #+#             */
/*   Updated: 2022/03/23 03:40:42 by mannahri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

// int main()
// {
// 	t_list	*head;

// 	head = NULL;
// 	ft_lstadd_front(&head, ft_lstnew(100));
// 	ft_lstadd_front(&head, ft_lstnew(10));
// 	ft_lstadd_front(&head, ft_lstnew(1));
// 	printf("this is the last node : %d\n", ft_lstlast(head)->content);
// }