/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayezhova <ayezhova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:53:56 by ayezhova          #+#    #+#             */
/*   Updated: 2019/10/03 17:01:42 by ayezhova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
} */

#include "libft.h"

void	ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
}