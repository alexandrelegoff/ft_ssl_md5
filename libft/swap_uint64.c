/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_uint64.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-goff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 13:52:14 by ale-goff          #+#    #+#             */
/*   Updated: 2019/04/04 13:52:28 by ale-goff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint64_t	swap_uint64(uint64_t val)
{
	val = ((val << 8) & 0xFF00FF00FF00FF00ULL) |
	((val >> 8) & 0x00FF00FF00FF00FFULL);
	val = ((val << 16) & 0xFFFF0000FFFF0000ULL) |
	((val >> 16) & 0x0000FFFF0000FFFFULL);
	return (val << 32) | (val >> 32);
}