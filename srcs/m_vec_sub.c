/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec_sub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 18:22:58 by vguerand          #+#    #+#             */
/*   Updated: 2019/04/22 18:33:51 by vguerand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmaths.h"

t_vect		m_vec_add(const t_vect a, const t_vect b)
{
	t_vect c;

	c.x = a.x - b.x;
	c.y = a.y - b.y;
	c.z = a.z - b.z;
	return (c);
}
