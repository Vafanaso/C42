/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:09:24 by vafanaso          #+#    #+#             */
/*   Updated: 2024/10/08 09:09:51 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_ptr;

	while (*lst != NULL)
	{
		temp_ptr = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp_ptr;
	}
	free(*lst);
	*lst = NULL;
}
