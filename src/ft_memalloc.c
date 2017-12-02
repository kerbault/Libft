/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memalloc.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kerbault <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 20:38:51 by kerbault     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 20:39:01 by kerbault    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*ret;

	ret = (void *)malloc(sizeof(*ret) * size);
	if (!ret)
		return (NULL);
	ft_bzero(ret, size);
	return (ret);
}
