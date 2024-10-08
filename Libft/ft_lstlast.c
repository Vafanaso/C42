/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:06:46 by vafanaso          #+#    #+#             */
/*   Updated: 2024/10/08 09:07:17 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp_ptr;

	if (lst == NULL)
		return (NULL);
	temp_ptr = lst;
	while (temp_ptr->next != NULL)
	{
		temp_ptr = temp_ptr->next;
	}
	return (temp_ptr);
}
