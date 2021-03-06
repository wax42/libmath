/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec3_norm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 19:11:00 by smokhtar          #+#    #+#             */
/*   Updated: 2019/04/22 18:29:55 by vguerand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmaths.h"

float	m_vec3_norm(t_vect a)
{
	return (sqrt(a.x * a.x + a.y * a.y + a.z * a.z));
}
