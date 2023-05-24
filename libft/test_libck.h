/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:58:00 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/24 02:43:14 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBCK_H
#define LIBCK_H

// cheking functions prototypes

void    ck_atoi(void);
void    ck_bzero(void);
void    ck_calloc(void);
void	ck_isalnum(void);
void	ck_isalpha(void);
void	ck_isascii(void);
void    ck_isdigit(void);
void    ck_isprint(void);
void	ck_memchr(void);
void 	ck_memcmp(void);
void    ck_memcpy(void);
void    ck_memmove(void);
void    ck_memmove(void);
void    ck_memset(void);
void    ck_strchr(void);
void    ck_strdup(void);
void    ck_strjoin(void);
void    ck_strlcat(void);
void	ck_strlcpy(void);
void	ck_split(void);
void	ck_strlen(void);
void	ck_strncmp(void);
void	ck_strnstr(void);
void	ck_strrchr(void);
void	ck_strtrim(void);
void	ck_substr(void);
void	ck_toupper(void);
void	ck_tolower(void);
void	ck_itoa(void);
void	ck_strmapi(void);
void	ck_striteri(void);
void	ck_putchar_fd(void);
void	ck_putstr_fd(void);
void	ck_putendl_fd(void);
void	ck_putnbr_fd(void);
void	ck_lstnew(void);
void	ck_lstadd_front();
void	ck_lstsize();
void	ck_lstlast();
void	ck_lstdelone(void);
void	ck_lstclear(void);
void	ck_lstiter(void);
void	ck_lstmap(void);
#endif
