/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:05:26 by vafanaso          #+#    #+#             */
/*   Updated: 2024/10/08 09:06:17 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp_ptr;
	int		i;

	temp_ptr = lst;
	i = 0;
	while (temp_ptr != NULL)
	{
		temp_ptr = temp_ptr->next;
		i++;
	}
	return (i);
}
