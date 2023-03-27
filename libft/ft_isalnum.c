/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 05:34:58 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/27 20:26:02 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_isalpha.c"
#include "ft_isdigit.c"

int	ft_isalnum(int c)
{
	return ((ft_isdigit(c)) || (ft_isalpha(c)));
}
