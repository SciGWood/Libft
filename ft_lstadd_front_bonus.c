/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:27:30 by gdetourn          #+#    #+#             */
/*   Updated: 2023/12/19 09:32:49 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Function name 	ft_lstadd_front
	Prototype 		void ft_lstadd_front(t_list **lst, t_list *new);
	Turn in files 	-
	Parameters 		lst: The address of a pointer to the first link of a list.
			new: The address of a pointer to the node to be added to the list.
	Return value 	None
	External functs. None
	Description 	Adds the node ’new’ at the beginning of the list.*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst)
		new->next = NULL;
	new->next = *lst;
	*lst = new;
}
