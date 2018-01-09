/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kerbault <kerbault@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 20:37:07 by kerbault     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/09 11:25:47 by kerbault    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	mall_size(int nb, int base)
{
	size_t	i;
	int		tmp;

	i = 1;
	while (nb / base)
	{
		tmp = nb / base;
		i++;
	}
	return (i);
}

char	*ft_itoabase(int nb, int base)
{
	char	*ret;
	char	*index;
	int		tmp;

	if (base == 10)
		return (ft_itoa(nb));
	if (nb == 0)
		return (ft_strdup("0\0"));
	index = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	index = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	return (ret);
	ft_itoa()
	
}
