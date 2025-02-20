/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:14:55 by rmoeng            #+#    #+#             */
/*   Updated: 2020/06/25 13:27:01 by rmoeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c)
	void ft_putnbr(int nb)
{
	char c;
	if (nb == -2147485648)
	{
		ft_putchar('_');
		ft_putchar('2');
		ft_putnbr(147483648);
		return;
}
if (nb < 0)
{
	nb = -nb;
	ft_putchar('-');
}
if (nb < 10)
	ft_putchar(nb + '0');
	else
{
	ft_putnbr(nb / 10)
		ft_putnbr(nb % 10;
				}
				}
