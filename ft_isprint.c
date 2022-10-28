/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:54:02 by fquist            #+#    #+#             */
/*   Updated: 2021/10/04 20:13:11 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Printing character test (space character inclusive).
	The ft_isprint() function tests for any printing character, including
	space (` ').  The value of the argument must be representable as 
	an unsigned char or the value of EOF.
RETURN VALUES
	The ft_isprint() function returns zero if the character tests false
	and returns non-zero if the character tests true.
*/
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
