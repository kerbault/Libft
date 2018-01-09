/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kerbault <kerbault@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 20:37:07 by kerbault     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/09 12:13:22 by kerbault    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static size_t	mall_size(const int nb, const int base)
{
	size_t	i;
	int		tmp;

	i = 1;
	while (nb / base != 0)
	{
		tmp = nb / base;
		i++;
	}
	return (i);
}

char			*ft_itoabase(int nb, const int base)
{
	char	*ret;
	char	*index;
	int		i;
	int		tmp;

	if (base == 10)
		return (ft_itoa(nb));
	if (nb == 0)
		return (ft_strdup("0\0"));
	index = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	i = 0;
	ret = ft_strnew(mall_size(nb, base));
	while (nb / base != 0)
	{
		tmp = nb;
		tmp /= base;
		ret[i] = index[nb - (tmp * base)];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
