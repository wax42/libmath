/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec3_norma.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokhtar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 19:11:19 by smokhtar          #+#    #+#             */
/*   Updated: 2019/02/13 19:11:21 by smokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmaths.h"

t_vect	m_vec3_norma(t_vect a)
{
	return (m_vec3_div(a, m_vec3_norm(a)));
}