/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_delta.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 18:25:08 by smokhtar          #+#    #+#             */
/*   Updated: 2019/04/22 18:31:47 by vguerand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmaths.h"

t_vect	m_delta(float a, float b, float c)
{
	t_vect	sol;

	sol.x = b * b - 4.0 * a * c;
	if (sol.x > 0)
	{
		sol.y = (-b - sqrt(sol.x) / (2 * a));
		sol.y = (-b + sqrt(sol.x) / (2 * a));
	}
	return (sol);
}
