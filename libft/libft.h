/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:58:20 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/05 02:46:23 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

// other c libraries 

// at the end I have to remove these 
#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

// remove upto this line

// function prototypes 
int 	ft_isalpha(int c);
int 	ft_isdigit(int c);
int	ft_isalnum(int c);
int 	ft_isascii(int c);
int 	ft_isprint(int c);
int 	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_strlen(const char *s);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memset(void *s, int c, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

// global variables 


// structures

#endif
