/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhomche <akhomche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:07:01 by akhomche          #+#    #+#             */
/*   Updated: 2023/10/31 17:22:35 by akhomche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>

/*======== CHARS ========*/
int	ft_isalpha(char c);
int	ft_isdigit(int arg);
int	ft_isalnum(int arg);
int	ft_isascii(int arg);
int	ft_isprint(int arg);

/*======== STRINGS ========*/
long unsigned int ft_strlen(char* str);

/*======== MEMORY ========*/
void	*ft_memset(void *str, int c, size_t len);

#endif
