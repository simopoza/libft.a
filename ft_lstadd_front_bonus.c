/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannahri <mannahri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 00:50:37 by mannahri          #+#    #+#             */
/*   Updated: 2022/03/23 01:12:01 by mannahri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **head, t_list *new)
{
	t_list	*tmp;

	if (*head == NULL)
		*head = new;
	else
	{
		tmp = new;
		tmp->next = *head;
		*head = tmp;
	}
}

// int main()
// {
// 	t_list	*head;
// 	//t_list	*tmp;

// 	head = NULL;
// 	//tmp = ft_lstnew(1000);
// 	ft_lstadd_front(&head, ft_lstnew(1000));
// 	//tmp = ft_lstnew(100);
// 	ft_lstadd_front(&head, ft_lstnew(100));
// 	//tmp = ft_lstnew(10);
// 	ft_lstadd_front(&head, ft_lstnew(10));
// 	//tmp = ft_lstnew(5);
// 	ft_lstadd_front(&head, ft_lstnew(5));
// 	//tmp = head;
// 	//t_list *bb;
// 	while (head)
// 	{
// 		// if (!tmp->next)
// 		// 	bb = tmp;
// 		printf("%d\n", head->content);
// 		head = head->next;;
// 	}
// 	//printf(">>%d<<<\n", bb->content);

// }