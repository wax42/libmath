/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec3_div.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 18:26:14 by smokhtar          #+#    #+#             */
/*   Updated: 2019/04/22 18:34:52 by vguerand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmaths.h"

t_vect		m_vec3_div(const t_vect a, const float b)
{
	t_vect	tmp;

	if (b == 0)
		return (tmp = (t_vect){0, 0, 0});
	tmp.x = a.x / b;
	tmp.y = a.y / b;
	tmp.z = a.z / b;
	return (tmp);
}
