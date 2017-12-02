/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kerbault <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 20:43:51 by kerbault     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 20:43:53 by kerbault    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*ret;

	if (s)
	{
		i = ft_strlen(s);
		ret = ft_strnew(i);
		if (f && ret)
		{
			while (*s)
				*ret++ = f(*s++);
			return (ret - i);
		}
	}
	return (NULL);
}
