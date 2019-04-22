/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec3_mul.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 18:26:09 by smokhtar          #+#    #+#             */
/*   Updated: 2019/04/22 18:29:36 by vguerand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmaths.h"

t_vect		m_vec3_mul(const t_vect a, const float b)
{
	t_vect	tmp;

	tmp.x = a.x * b;
	tmp.y = a.y * b;
	tmp.z = a.z * b;
	return (tmp);
}
