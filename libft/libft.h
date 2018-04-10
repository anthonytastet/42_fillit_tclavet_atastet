/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 10:56:58 by atastet           #+#    #+#             */
/*   Updated: 2018/04/10 16:16:41 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

size_t		ft_strlen(char *str);
char		*ft_strdup(char *str);
int			ft_strcmp(char *s1, char *s2);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dst, const char *src, size_t len);
char		*ft_strcat(char *s1, char *s2);
char		*ft_strncat(char *s1, char *s2, int n);
