/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 10:28:55 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/02 11:33:27 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "eval.h"

t_stack				*ft_create_elem(void *data)
{
	t_stack	*elem;

	if (!(elem = (t_stack *)malloc(sizeof(t_stack))))
		return (NULL);
	elem->next = NULL;
	elem->data = data;
	return (elem);
}
