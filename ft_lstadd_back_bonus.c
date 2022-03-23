/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannahri <mannahri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 23:37:47 by mannahri          #+#    #+#             */
/*   Updated: 2022/03/23 03:52:25 by mannahri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list	*tmp;

	if (*lst == NULL)
		*lst = new;
	else
	{
		tmp = ft_lstlast(*lst);
		tmp->next = new;
		new->next = NULL;
	}
}


// int main()
// {
// 	t_list	*head;
// 	t_list	*tmp;

// 	head = NULL;
// 	ft_lstadd_front(&head, ft_lstnew(100));
// 	ft_lstadd_front(&head, ft_lstnew(10));
// 	ft_lstadd_front(&head, ft_lstnew(1));
// 	ft_lstadd_back(&head, ft_lstnew(98));
// 	while (head)
// 	{
// 		printf("%d\n", head->content);
// 		head = head->next;
// 	}
// }