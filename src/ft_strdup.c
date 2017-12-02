/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kerbault <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 20:43:20 by kerbault     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 20:43:22 by kerbault    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	char	*ret;

	if (!(ret = (char *)malloc(sizeof(*ret) * ft_strlen(s) + 1)))
		return (NULL);
	ft_strcpy(ret, s);
	return (ret);
}
