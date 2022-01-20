/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:03:13 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/20 17:35:11 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>

int		ft_toupper(int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strchr(const char *s, int c);
int		ft_tolower(int c);
int		ft_strlen(char *str);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
size_t	ft_strlcat(char *dest, char *src, size_t x);
int		ft_strncmp(const char *str, const char *str2, size_t n);
int		ft_isdigit(int x);
int		ft_isalpha(int x);
int		ft_ialnum(int x);
int		ft_isascii(int x);
int		ft_isprint(int x);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *ptr, void *ptr2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memset(void *ptr, int x, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_bzero(void *ptr, size_t n);

#endif /* LIB_H */
