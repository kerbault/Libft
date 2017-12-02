/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kerbault <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 20:42:55 by kerbault     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 20:42:57 by kerbault    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	*ret;

	ret = (char *)s;
	while (*ret != (char)c && *ret)
		ret++;
	if (*ret == (char)c)
		return (ret);
	return (NULL);
}
