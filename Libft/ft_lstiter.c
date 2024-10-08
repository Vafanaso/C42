/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:10:15 by vafanaso          #+#    #+#             */
/*   Updated: 2024/10/08 09:10:45 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp_ptr;

	temp_ptr = lst;
	while (temp_ptr != NULL)
	{
		f(temp_ptr->content);
		temp_ptr = temp_ptr->next;
	}
}
