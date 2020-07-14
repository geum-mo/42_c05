/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:00:21 by gekang            #+#    #+#             */
/*   Updated: 2020/07/15 00:09:01 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_sqrt(int nb)
{
	unsigned int	sqrt;
	unsigned int	i;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	i = 0;
	while ((sqrt = i * i) <= (unsigned int)nb)
		i++;
	i -= 1;
	return (i * i == (unsigned int)nb ? i : 0);
}
