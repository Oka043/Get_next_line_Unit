/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaktion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 13:13:47 by olaktion          #+#    #+#             */
/*   Updated: 2018/01/03 13:51:10 by olaktion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char*))
{
	int	j;

	j = 0;
	if (!s || !f)
		return ;
	while (s[j])
	{
		f(&s[j]);
		j++;
	}
}
