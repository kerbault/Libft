/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kerbault <kerbault@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 20:43:40 by kerbault     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/09 15:24:27 by kerbault    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*ret;

	NULL_CHECK(s1);
	NULL_CHECK(s2);
	size = ft_strlen(s1) + ft_strlen(s2);
	MALLOC_CHECK((ret = ft_strnew(size + 1)));
	ret = ft_strcpy(ret, s1);
	ft_strcat(ret, s2);
	return (ret);
}
