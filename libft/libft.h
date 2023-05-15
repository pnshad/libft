/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:58:20 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/14 19:55:41 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

// other c libraries 
#include <unistd.h>
#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

// my own header that includes my own functions
#include "libmy.h"

// function prototypes 
int 	ft_isalpha(int c);
int 	ft_isdigit(int c);
int		ft_isalnum(int c);
int 	ft_isascii(int c);
int 	ft_isprint(int c);
int 	ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strlen(const char *s);
int		ft_atoi(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char    *ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strdup(const char *src);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char 	*ft_strtrim(char const *s1, char const *set);
char    *ft_itoa(int n);

void	*ft_memset(void *s, int c, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_calloc(size_t count, size_t size);

char    **ft_split(char const *s, char c);


// global variables 


// structures

#endif
