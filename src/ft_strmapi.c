/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kerbault <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 20:43:56 by kerbault     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 20:43:57 by kerbault    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	j;
	char	*ret;

	j = 0;
	if (s)
	{
		i = ft_strlen(s);
		ret = ft_strnew(i);
		if (f && ret)
		{
			while (*s)
				*ret++ = f(j++, *s++);
			return (ret - i);
		}
	}
	return (NULL);
}
