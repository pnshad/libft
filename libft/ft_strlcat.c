/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 23:29:42 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/08 23:43:02 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t  dstlen;
    size_t  srclen;
    size_t  counter;

    dstlen = (size_t)ft_strlen(dst);
    srclen = (size_t)ft_strlen(src);
    counter = dstlen;
    if (!(*dst == '\0' || dstsize == 0))
    {
        while (*dst)
            dst++;
        while (counter < dstsize - 1 && *src)
        {
            ft_memmove(dst + counter, src, 1);
            src++;
            counter++;
        }
        *(dst + counter) = '\0';
    }
    return (srclen + dstlen);
}
