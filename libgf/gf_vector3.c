/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gf_vector3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuras <fjuras@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:41:33 by fjuras            #+#    #+#             */
/*   Updated: 2023/01/15 22:11:10 by fjuras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gf.h"

void	v3_ineg(t_v3 *v)
{
	v->x = -v->x;
	v->y = -v->y;
	v->z = -v->z;
}

void	v3_isub(t_v3 *v1, t_v3 v2)
{
	v1->x -= v2.x;
	v1->y -= v2.y;
	v1->z -= v2.z;
}

void	v3_iadd(t_v3 *v1, t_v3 v2)
{
	v1->x += v2.x;
	v1->y += v2.y;
	v1->z += v2.z;
}

void	v3_imult(t_v3 *v, double m)
{
	v->x *= m;
	v->y *= m;
	v->z *= m;
}