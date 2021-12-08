/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_isdata.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaimi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:15:22 by mnaimi            #+#    #+#             */
/*   Updated: 2021/12/07 23:37:17 by mnaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* -------------------------------------------------------------------------- */

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/* -------------------------------------------------------------------------- */

int	ft_isflag(char c)
{
	if (c == '-' || c == '+' || c == ' ' || c == '0' || c == '#')
        return (c);
    return (0);
}

/* -------------------------------------------------------------------------- */

int	ft_istype(char c)
{
	if (c == 'c' || c == 's' || c == 'd' || c == 'i' \
        || c == 'p' || c == 'x' || c == 'X' || c == 'u')
        return (c);
    return (0);
}

/* -------------------------------------------------------------------------- */

int	ft_isdot(char **c)
{
	if (**c == '.')
    {
        (*c) += 1;
        return (1);
    }
    return (0);
}

/* -------------------------------------------------------------------------- */

int	ft_isvalid(char c)
{
	if (c == 'c' || c == 's' || c == 'd' || c == 'i' \
        || c == 'p' || c == 'x' || c == 'X' || c == 'u' \
        || c == '.' || c == '0' || c == '+' || c == '-' \
        || c == '#' || (c >= '0' && c <= '9'))
        return (1);
    return (0);
}

/* -------------------------------------------------------------------------- */