/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 20:53:22 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/10 23:44:44 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *dst;

	dst = (char *)malloc(len * sizeof(char));
	if (dst == NULL || len == 0 || s == NULL || start > ft_strlen(s) + 1)
		return (NULL);


}
