/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:33:50 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/08 12:56:26 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* is */
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

/* str */
size_t	ft_strlen(int c);
size_t	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t	ft_strlcat(char *dest, char *src, unsigned int size);
char	*ft_strchr(const char *str, int c;)
char	*ft_strrchr(const char *str, int c);
int		ft_strncmp(char *x, char *y, unsigned int n);
ft_strnstr
char	ft_strdup(const char *str);

/* mem */
void	*ft_memset(void *p, int c, size_t len);
void	*ft_bzero(void *p, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *p, int c, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t len);
void	*ft_calloc(size_t n, size_t size);

/* to */
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
