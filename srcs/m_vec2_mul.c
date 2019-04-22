/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec2_mul.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 18:25:34 by smokhtar          #+#    #+#             */
/*   Updated: 2019/04/22 18:26:26 by vguerand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmaths.h"

t_vect		m_vec2_mul(const t_vect a, const float b)
{
	t_vect	tmp;

	tmp.x = a.x * b;
	tmp.y = a.y * b;
	return (tmp);
}
