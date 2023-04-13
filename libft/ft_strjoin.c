/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:33:13 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/13 20:05:47 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	onelen;
	size_t	twolen;
	char	*dst;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL || !*s1)
		s1 = "";
	else if (s2 == NULL || !*s2)
		s2 = "";
	onelen = ft_strlen(s1);
	twolen = ft_strlen(s2);
	dst = (char *)malloc((onelen + twolen + 1) * sizeof(char));
	ft_strlcpy(dst, s1, onelen + 1);
	ft_strlcat(dst + onelen, s2, twolen + 1);
	return (dst);
}
