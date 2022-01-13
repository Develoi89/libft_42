/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:03:13 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/13 15:29:09 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	ft_toupper(char c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
char	ft_tolower(char c);
int		ft_strlen(char *str);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
size_t	ft_strlcat(char *dest, char *src, size_t x);
int		ft_isdigit(int x);
int		ft_isalpha(int x);
int		ft_ialnum(int x);
int		ft_isascii(int x);
int		ft_isdigit(int x);
int		ft_isprint(int x);
int		ift_strlen(char *str);
void	*ft_memset(void *ptr, int x, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_bzero(void *ptr, size_t n);

#endif /* LIB_H */
