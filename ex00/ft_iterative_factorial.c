/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 08:30:03 by gekang            #+#    #+#             */
/*   Updated: 2020/07/15 00:07:23 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_iterative_factorial(int nb)
{
	unsigned int	unb;
	int				array[100];
	int				result;
	int				i;

	if (nb < 0)
		return (0);
	i = 0;
	unb = (unsigned)nb;
	result = 1;
	while (unb != 0)
	{
		array[i] = unb;
		unb--;
		i++;
	}
	while (i != 0)
	{
		result *= array[i - 1];
		i--;
	}
	return (result);
}
