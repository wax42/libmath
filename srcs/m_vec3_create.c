/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec3_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokhtar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 19:11:44 by smokhtar          #+#    #+#             */
/*   Updated: 2019/02/13 19:11:45 by smokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmaths.h"

t_vect	m_vec3_create(float x, float y, float z)
{
	t_vect	a;

	a[0] = x;
	a[1] = y;
	a[2] = z;
	return (a);
}
