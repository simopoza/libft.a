/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannahri <mannahri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 00:50:27 by mannahri          #+#    #+#             */
/*   Updated: 2022/03/23 03:18:40 by mannahri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	node->content = content;
	node->next = NULL;
	return (node);
}

// int main()
// {
// 	t_list	*head;
// 	head = ft_lstnew(2);
// 	head = ft_lstnew(-2);
// 	head = ft_lstnew(78);
// 	head = ft_lstnew(50);
// 	while (head != NULL)
// 	{
// 		printf("%d\n", head->content);
// 		head = head->next;
// 	}
// }
