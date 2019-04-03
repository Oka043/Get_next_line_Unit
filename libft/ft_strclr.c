/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaktion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 12:30:51 by olaktion          #+#    #+#             */
/*   Updated: 2018/01/03 13:50:46 by olaktion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *s)
{
	int j;

	j = 0;
	if (!s)
		return ;
	while (s[j] != '\0')
	{
		s[j] = '\0';
		j++;
	}
}