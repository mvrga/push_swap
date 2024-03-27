/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:31:17 by marcribe          #+#    #+#             */
/*   Updated: 2024/03/19 22:15:42 by marcribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int			*content;
	struct s_list	*next;
}	t_list;

int		ft_isalnum(const int i);
int		ft_isalpha(const int i);
int		ft_isascii(const int i);
int		ft_isdigit(const int i);
int		ft_isprint(const int i);
int		ft_tolower(int c);
int		ft_toupper(int ch);
int		ft_atoi(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const int *s1, const int *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strrchr(const char *str, int c);
char	*ft_strchr(const char *str, int c);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s1);
char	*ft_itoa(int n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int	*ft_memmove(int *dest, const int *src, size_t n);
int	*ft_memcpy(int *dest, const int *src, size_t n);
int	*ft_memchr(const int *str, int c, size_t n);
int	*ft_memset(int *s, int c, size_t n);
int	*ft_calloc(size_t n, size_t size);
int	ft_putendl_fd(char *s, int fd);
int	ft_putchar_fd(char c, int fd);
int	ft_putstr_fd(char *s, int fd);
int	*ft_bzero(int *s, size_t n);
int	ft_putnbr_fd(int n, int fd);
int	ft_striteri(char *s, int (*f)(unsigned int, char*));

void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstnew(int *content);
t_list	*ft_lstmap(t_list *, int *(*f)(int *), int (*del)(int *));
t_list	*ft_lstlast(t_list *lst);
void	ft_lstiter(t_list *lst, int (*f)(int *));
void	ft_lstdelone(t_list *lst, int (*del)(int *));
void	ft_lstclear(t_list **lst, int (*del)(int *));
void	ft_lstadd_front(t_list **lst, t_list *new);

#endif
