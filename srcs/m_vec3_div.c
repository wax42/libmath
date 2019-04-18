/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec3_div.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokhtar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 18:26:14 by smokhtar          #+#    #+#             */
/*   Updated: 2019/02/13 18:26:15 by smokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmaths.h"

t_vect		m_vec3_div(const t_vect a, const float b)
{
	t_vect	tmp;

	if (b == 0)
		return (tmp = (t_vect){0});
	tmp[0] = a[0] / b;
	tmp[1] = a[1] / b;
	tmp[2] = a[2] / b;
	return (tmp);
}
