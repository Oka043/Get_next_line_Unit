/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaktion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:53:13 by olaktion          #+#    #+#             */
/*   Updated: 2018/01/03 14:04:17 by olaktion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(int n)
{
	if (n >= 32 && n < 127)
		return (1);
	else
		return (0);
}
