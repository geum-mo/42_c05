/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:55:03 by gekang            #+#    #+#             */
/*   Updated: 2020/07/15 00:30:18 by gekang           ###   ########.fr       */
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

int					ft_is_prime(int nb)
{
	int				i;
	int				sqrt;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 2;
	sqrt = ft_sqrt(nb);
	while ((i <= sqrt) && (nb % i != 0))
		i++;
	return (i > sqrt);
}

int					ft_find_next_prime(int nb)
{
	int				i;

	i = 0;
	while (i >= 0)
	{
		if (ft_is_prime(nb + i))
			return (nb + i);
		else
		{
			i++;
		}
	}
	return (0);
}
